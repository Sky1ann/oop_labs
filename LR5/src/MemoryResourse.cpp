#include "../include/MemoryResourse.h"
#include <stdexcept>
#include <algorithm>

FixedBlockMemoryResource::FixedBlockMemoryResource(size_t blockSize)
    : blockSize_(blockSize), memory_(nullptr) {
    memory_ = std::pmr::get_default_resource()->allocate(blockSize);  
}

FixedBlockMemoryResource::~FixedBlockMemoryResource() {
    std::pmr::get_default_resource()->deallocate(memory_, blockSize_);
}

void* FixedBlockMemoryResource::do_allocate(size_t bytes, size_t alignment) {
    if (allocated_ + bytes > blockSize_) {
        throw std::bad_alloc();  
    }
    void* ptr = static_cast<char*>(memory_) + allocated_;  
    allocated_ += bytes;
    allocations_[ptr] = bytes;
    return ptr;
}

void FixedBlockMemoryResource::do_deallocate(void* p, size_t bytes, size_t alignment) {
    auto it = allocations_.find(p);
    if (it != allocations_.end()) {
        allocated_ -= it->second; 
        allocations_.erase(it);  
    } else {
        std::cerr << "Ошибка: Попытка деаллокации несуществующего указателя!" << std::endl;
    }
}

bool FixedBlockMemoryResource::do_is_equal(const std::pmr::memory_resource& other) const noexcept {
    return this == &other;
}
