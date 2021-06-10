#pragma once
#include "doubleNode.cpp"


template <class T>
class doubleList{
    private:
    doubleNode<T>* head = NULL;
    doubleNode<T>* tail = NULL;

    public:
    doubleList();
    void add(T x);
    void show;
    
};