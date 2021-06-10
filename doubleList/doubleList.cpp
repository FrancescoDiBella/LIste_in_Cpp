#include "doubleList.h"
#include <iostream>

template< class T>
doubleList<T>::doubleList(){}

template <class T>
void doubleList<T>::add(T x){
    doubleNode<T>* nuovo = new doubleNode<T>(x);

    if(testa!=NULL){
        nuovo->succ = testa;
        testa->prec = nuovo;
    }

    testa = nuovo;
}

template <class T>
void doubleList<T>::show(){
    doubleNode<T>* iter = testa;

    while(iter!=NULL){
        if(iter->prec!=NULL)
            std::cout << iter->prec->data <<  " <---- prec \t";
        else std::cout << "NULL" <<  " <---- prec \t";

        if(iter!=NULL)
            std::cout << iter->data << "\t succ ----> " ;
        else std::cout << "NULL" << "\t succ ----> " ;

        if(iter->succ==NULL) std::cout << "NULL \n" ;
        else std::cout << iter->succ->data << "\n" ;

        iter = iter->succ;
    }
    
}

template <class T>
doubleNode<T>* doubleList<T>::search(T x){
    if(testa==NULL) return nullptr;
    
    doubleNode<T>* nuovo = testa;
    
    for(nuovo; nuovo!=NULL; nuovo = nuovo->succ)
        if(nuovo->data == x) return nuovo;
    return nullptr;
}

template <class T> 
void doubleList<T>::cancella(T x){
    doubleNode<T>* iter = new doubleNode<T>();
    iter = search(x);
    if(iter==NULL){
         std::cout << "Lista vuota o elemento " << x << " non presente.\n";
         return;
    }
       
        
    if(testa->data == x){
        if(testa->succ == NULL){
            testa=NULL;
        }else{
            testa = testa->succ;
            delete testa->prec;
            testa->prec = nullptr;
        }
    }else if(iter->succ == NULL){
        iter->prec->succ = nullptr;
        delete iter;
    }else{
        iter->prec->succ = iter->succ;
        iter->succ->prec = iter->prec;
        delete iter;
    }

    
}

template <class T>
void doubleList<T>::addOrdinata(T x){

    doubleNode<T>* iter = testa;
    doubleNode<T>* precc = NULL;
    doubleNode<T>* nuovo = new doubleNode<T>(x);


    while(iter!=NULL && iter->data < x){
        precc = iter;
        iter = iter->succ;
    }

    if(testa == NULL){
        testa = nuovo;
    }
    else{

        if(precc == NULL){
            nuovo->succ = testa->succ;
            testa->succ->prec = nuovo;
            testa = nuovo;
        }
        doubleNode<T>* success = precc->succ;

        nuovo->prec = precc;
        nuovo->succ = success;

        precc->succ = nuovo;
    
    
        if(success!=NULL){
            success->prec = nuovo;
            return;
        }
    }
}