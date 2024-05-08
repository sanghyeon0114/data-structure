#ifndef QUEUE_H
#define QUEUE_H

#include "linked_list.h"

class Queue : public LinkedList {
public:
    void push(int data);
    int pop();
    int peek();
    bool operator+=(int value);
};

#endif