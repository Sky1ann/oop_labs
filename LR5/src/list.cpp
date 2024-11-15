#include "../include/list.h"


template <typename T>
SingleLinkedList<T>::Iterator::Iterator(Node* node) : current_(node) {}


template <typename T>
T& SingleLinkedList<T>::Iterator::operator*() const {
    return current_->data;
}


template <typename T>
T* SingleLinkedList<T>::Iterator::operator->() {
    return &current_->data;
}


template <typename T>
typename SingleLinkedList<T>::Iterator& SingleLinkedList<T>::Iterator::operator++() {
    current_ = current_->next;
    return *this;
}


template <typename T>
typename SingleLinkedList<T>::Iterator SingleLinkedList<T>::Iterator::operator++(int) {
    Iterator tmp = *this;
    ++(*this);
    return tmp;
}

template <typename T>
bool SingleLinkedList<T>::Iterator::operator==(const Iterator& other) const {
    return current_ == other.current_;
}


template <typename T>
bool SingleLinkedList<T>::Iterator::operator!=(const Iterator& other) const {
    return current_ != other.current_;
}


template <typename T>
SingleLinkedList<T>::SingleLinkedList(std::pmr::memory_resource* mr)
    : allocator_(mr), head_(nullptr) {}


template <typename T>
SingleLinkedList<T>::~SingleLinkedList() {
    while (head_) {
        Node* tmp = head_;
        head_ = head_->next;
        allocator_.deallocate(tmp, sizeof(Node));
    }
}


template <typename T>
void SingleLinkedList<T>::push_front(const T& value) {
    Node* newNode = static_cast<Node*>(allocator_.allocate(sizeof(Node)));
    new(newNode) Node{value, head_};
    head_ = newNode;
}


template <typename T>
void SingleLinkedList<T>::pop_front() {
    if (head_) {
        Node* tmp = head_;
        head_ = head_->next; 
        allocator_.deallocate(tmp, sizeof(Node));
    }
}


template <typename T>
typename SingleLinkedList<T>::Iterator SingleLinkedList<T>::begin() {
    return Iterator(head_);
}


template <typename T>
typename SingleLinkedList<T>::Iterator SingleLinkedList<T>::end() {
    return Iterator(nullptr);
}
