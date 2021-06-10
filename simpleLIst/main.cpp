#include "simpleList.h"
#include "simpleList.cpp"
#include <iostream>

int main(){
    simpleList<int> list;
    list.addOrdinata(5);
    list.addOrdinata(6);
    list.addOrdinata(-1);
    list.addOrdinata(2);
    list.addOrdinata(65);
    list.addOrdinata(4);
    list.addOrdinata(-3);

    list.stampa();
    list.cancel(-3);
    list.cancel(-1);
    list.cancel(6);
    list.cancel(5);
    list.cancel(2);
    list.cancel(65);
    list.cancel(4);
    list.cancel(4);
    list.stampa();
    
    return 0;
}