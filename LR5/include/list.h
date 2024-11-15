#ifndef LIST_H
#define LIST_H

#include <memory_resource>
#include <iterator>

template <typename T>
class SingleLinkedList {
public:
    struct Node {
        T data;
        Node* next;
    };

    class Iterator {
    public:
        using iterator_category = std::forward_iterator_tag;
        using value_type = T;
        using difference_type = std::ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        explicit Iterator(Node* node);

        T& operator*() const;
        T* operator->();
        Iterator& operator++();
        Iterator operator++(int);
        bool operator==(const Iterator& other) const;
        bool operator!=(const Iterator& other) const;

    private:
        Node* current_;
    };

    explicit SingleLinkedList(std::pmr::memory_resource* mr = std::pmr::get_default_resource());
    ~SingleLinkedList();

    void push_front(const T& value);
    void pop_front();

    Iterator begin();
    Iterator end();

private:
    std::pmr::polymorphic_allocator<Node> allocator_;
    Node* head_;
};


#endif 