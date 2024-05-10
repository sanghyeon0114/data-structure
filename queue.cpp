#include "queue.h"

void Queue::push(int data) {
    Queue::insert(this->size_, data);
}

int Queue::pop() {
    int result = Queue::get(0);
    Queue::remove(0);
    return result;
}

int Queue::peek() {
    return Queue::get(0);
}

void Queue::operator+=(int value) {
    Queue::push(value);
}