#include "simpleList.h"
#include "simpleList.cpp"
#include <iostream>

int main(){
    simpleList<int> list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);

    list.stampa();


    
    return 0;
}