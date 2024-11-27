#include "../include/MemoryResourse.h"
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <map>

FixedBlockMemoryResource::FixedBlockMemoryResource(size_t blockSize) 
    : blockSize_(blockSize), memory_(nullptr) {
    memory_ = std::pmr::get_default_resource()->allocate(blockSize);
    // Изначально весь блок считается свободным
    freeBlocks_.emplace(memory_, Block(memory_, blockSize));
}

FixedBlockMemoryResource::~FixedBlockMemoryResource() {
    std::pmr::get_default_resource()->deallocate(memory_, blockSize_);
}

void* FixedBlockMemoryResource::do_allocate(size_t bytes, size_t alignment) {
    // Ищем первый подходящий свободный блок
    auto it = freeBlocks_.lower_bound(nullptr);  // Для поиска подходящего блока

    for (; it != freeBlocks_.end(); ++it) {
        if (it->second.size >= bytes) {
            // Выделяем память из найденного блока
            void* ptr = it->second.ptr;
            size_t remainingSize = it->second.size - bytes;

            // Обновляем карту свободных блоков
            if (remainingSize > 0) {
                it->second.ptr = static_cast<char*>(it->second.ptr) + bytes;
                it->second.size = remainingSize;
            } else {
                freeBlocks_.erase(it);
            }

            // Запоминаем выделенный блок
            allocations_[ptr] = bytes;
            return ptr;
        }
    }

    throw std::bad_alloc();
}

void FixedBlockMemoryResource::do_deallocate(void* p, size_t bytes, size_t alignment) {
    // Проверяем, существует ли выделение
    auto it = allocations_.find(p);
    if (it != allocations_.end()) {
        // Освобождаем память
        freeBlocks_.emplace(p, Block(p, it->second));
        allocations_.erase(it);

        // Сливаем соседние свободные блоки
        mergeFreeBlocks();
    } else {
        std::cerr << "Ошибка: Попытка деаллокации несуществующего указателя!" << std::endl;
    }
}

bool FixedBlockMemoryResource::do_is_equal(const std::pmr::memory_resource& other) const noexcept {
    return this == &other;
}

void FixedBlockMemoryResource::mergeFreeBlocks() {
    // Обходим свободные блоки, чтобы объединить их
    auto it = freeBlocks_.begin();
    while (it != freeBlocks_.end()) {
        auto next = std::next(it);
        if (next != freeBlocks_.end() &&
            static_cast<char*>(it->second.ptr) + it->second.size == next->second.ptr) {
            // Если блоки смежны, объединяем их
            it->second.size += next->second.size;
            freeBlocks_.erase(next);
        } else {
            ++it;
        }
    }
}
