#pragma once
#include "simpleNode.cpp"

template <class T>
class simpleList{
    private:
        simpleNode<T>* testa;

    public:
        simpleList();
        //~simpleList();
        void add(T x);
        void cancel(T x);
        void addOrdinata(T x);
        void stampa();
};