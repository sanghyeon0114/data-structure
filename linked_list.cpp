#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList() {
    head_ = nullptr;
    size_ = 0;
}

LinkedList::~LinkedList() {
    Node* p = head_;
    while(p != nullptr) {
        Node* cur = p;
        p = p->next_;
        delete cur;
    }
    head_ = nullptr;
    size_ = 0;
}

void LinkedList::print() {
    Node* p = head_;
    while(p != nullptr) {
        std::cout << p->value_ << " ";
        p = p->next_;
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value) {
    Node* n = new Node(value);
    n->next_ = nullptr;
    size_++;

    if(head_ == nullptr) {
        head_ = n;
        return;
    }
    if(index == 0) {
        n->next_ = head_;
        head_ = n;
        return;
    }

    Node *pre = nullptr, *cur = head_;
    int indexCount = index;
    while(cur->next_ != nullptr && indexCount-- > 0) {
        pre = cur;
        cur = cur->next_;
    }
    
    if(indexCount == 0) {
        pre->next_ = n;
        n->next_ = cur;
    } else {
        cur->next_ = n;
    }
}

int LinkedList::get(int index) {
    if(head_ == nullptr) {
        return -1;
    }
    
    Node *cur = head_;
    int indexCount = index;
    while(cur->next_ != nullptr && indexCount-- > 0) {
        cur = cur->next_;
    }
    return cur->value_;
}

void LinkedList::remove(int index) {
    Node *pre = nullptr, *cur = head_;
    size_--;
    if(index == 0) {
        head_ = head_->next_;
        delete cur;
        return;
    }

    int indexCount = index;
    while(cur->next_ != nullptr && indexCount-- > 0) {
        pre = cur;
        cur = cur->next_;
    }
    pre->next_ = cur->next_;
    delete cur;
}