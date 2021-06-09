#pragma once
#include <iostream>
template <class T>
struct simpleNode{
    T data;
    simpleNode<T>* succ = NULL;
};