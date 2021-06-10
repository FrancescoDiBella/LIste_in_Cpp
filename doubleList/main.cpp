#include "doubleList.h"
#include "doubleList.cpp"
#include "doubleNode.cpp"
#include <iostream>

int main(){
    doubleList<int> list;

    list.addOrdinata(2);


    list.show();
    list.cancella(5);
    list.show();
    return 0;
}