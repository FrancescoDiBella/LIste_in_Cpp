#pragma once
#include <iostream>

template <class T>
struct doubleNode{
    T data;
    doubleNode<T>* succ = NULL;
    doubleNode<T>* prec = NULL;

    doubleNode(){}
    doubleNode(T x) : data(x){}
};