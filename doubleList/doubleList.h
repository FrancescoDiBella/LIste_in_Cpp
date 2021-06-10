#pragma once
#include "doubleNode.cpp"
#include <iostream>


template <class T>
class doubleList{
    private:
    doubleNode<T>* testa = NULL;

    public:
    doubleList();
    void add(T x);
    void addOrdinata(T x);
    doubleNode<T>* search(T x);
    void cancella(T x);
    void show();
    doubleNode<T>* getTesta() const {return this->testa;}  

    friend std::ostream& operator<<(std::ostream& o, const doubleList<T>& l){
        doubleNode<T>* iter = l.getTesta();

      while(iter!=NULL){
        if(iter->prec!=NULL)
            o << iter->prec->data <<  " <---- prec \t";
        else o << "NULL" <<  " <---- prec \t";

        if(iter!=NULL)
            o << iter->data << "\t succ ----> " ;
        else o << "NULL" << "\t succ ----> " ;

        if(iter->succ==NULL) o << "NULL \n" ;
        else o << iter->succ->data << "\n" ;

        iter = iter->succ;
      }

      return o;
    }
};