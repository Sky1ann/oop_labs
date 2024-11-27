#ifndef MEM_RES
#define MEM_RES

#include <iostream>
#include <memory_resource>
#include <map>

class FixedBlockMemoryResource : public std::pmr::memory_resource {
private:
    struct Block {
        void* ptr;  // Указатель на начало блока
        size_t size;  // Размер блока

        Block(void* p, size_t s) : ptr(p), size(s) {}
    };

    size_t blockSize_;  // Общий размер памяти
    void* memory_;      // Указатель на начало выделенной памяти
    std::map<void*, Block> freeBlocks_;  // Карта свободных блоков по указателю
    std::map<void*, size_t> allocations_;  // Карта выделенных блоков по указателю

    void mergeFreeBlocks();  // Метод для слияния соседних свободных блоков

public:
    explicit FixedBlockMemoryResource(size_t blockSize);
    ~FixedBlockMemoryResource();

protected:
    void* do_allocate(size_t bytes, size_t alignment) override;
    void do_deallocate(void* p, size_t bytes, size_t alignment) override;
    bool do_is_equal(const std::pmr::memory_resource& other) const noexcept override;
};

#endif
