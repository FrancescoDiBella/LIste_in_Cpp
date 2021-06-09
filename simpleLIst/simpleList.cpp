#include "simpleList.h"
#include <iostream>
template <class T>
simpleList<T>::simpleList() : testa(NULL) {}

template <class T>
void simpleList<T>::add(T x){
    simpleNode<T>* nuovo = new simpleNode<T>();
    nuovo->data = x;
    nuovo->succ = NULL;

    if(testa==NULL) testa = nuovo;
    else{
        nuovo->succ = testa;
        testa = nuovo;
    }
}

template <class T>
void simpleList<T>::stampa(){
    simpleNode<T>* x = testa;
    
    while(x!=NULL){
        std::cout << x->data << " ";
        x = x->succ;
    }
    std::cout << std::endl;
}