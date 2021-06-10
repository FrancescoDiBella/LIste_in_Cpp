#include "simpleList.h"
#include <iostream>
template <class T>
simpleList<T>::simpleList() : testa(NULL) {}

template <class T>
void simpleList<T>::add(T x){
    simpleNode<T>* nuovo = new simpleNode<T>();
    nuovo->data = x;
    nuovo->succ = NULL;

    nuovo->succ = testa;
    testa = nuovo;
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

template <class T>
void simpleList<T>::cancel(T x){
    simpleNode<T>* iter = testa;
    simpleNode<T>* prec = NULL;

    while(iter!=NULL){
        if(iter->data == x) break;
        prec = iter;
        iter = iter->succ;
    }
    
    if(iter==NULL) std::cout <<"Elemento non presente nella lista" << std::endl;
    else{
        if(prec!=NULL)
            prec->succ = iter->succ;
        else testa = iter->succ;
        iter->succ = NULL;
        delete iter;
        std::cout <<"Elemento "<<x << " eliminato dalla lista." << std::endl;
    }
}

template <class T>
void simpleList<T>::addOrdinata(T x){
    simpleNode<T>* nuovo = new simpleNode<T>();
    nuovo->data = x;
    nuovo->succ = NULL;

    simpleNode<T>* iter = testa;
    simpleNode<T>* prec = NULL;

    
         while(iter!=NULL && nuovo->data >= iter->data){
            prec = iter;
            iter = iter->succ;
         }
         if(prec==NULL){
             nuovo->succ = testa;
             testa = nuovo;
         }else{
             prec->succ = nuovo;
             nuovo->succ = iter;
         }
}
