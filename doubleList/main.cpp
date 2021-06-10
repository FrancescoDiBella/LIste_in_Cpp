#include "doubleList.h"
#include "doubleList.cpp"
#include "doubleNode.cpp"
#include <iostream>

int main(){
    doubleList<int> list;

    list.addOrdinata(5);
    list.addOrdinata(2);
    list.addOrdinata(6);
    list.addOrdinata(0);
    list.addOrdinata(-1);
     list.addOrdinata(-100);
      list.addOrdinata(5245);


    list.show();
    list.cancella(5);
    list.cancella(-100);
    list.cancella(5245);
    list.show();
    return 0;
}