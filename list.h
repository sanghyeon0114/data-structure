#ifndef LIST_H
#define LIST_H

#include "linked_list.h"

class List : protected LinkedList {
public:
    void insert(int index, int value);
    int get(int index);
    void remove(int index);
};

#endif