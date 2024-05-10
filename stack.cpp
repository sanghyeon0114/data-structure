#include "stack.h"

void Stack::push(int data) {
    Stack::insert(0, data);
}

int Stack::pop() {
    int result = Stack::get(0);
    Stack::remove(0);
    return result;
}

int Stack::peek() {
    return Stack::get(0);
}

void Stack::operator+=(int value) {
    Stack::push(value);
}