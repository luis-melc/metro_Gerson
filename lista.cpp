#include <iostream>
#include <string>
#include "lista.h"
using namespace std;

Lista::Lista(){
    list = NULL;
    end = NULL;
    nuevo = NULL;
    aux = NULL;
    count = 0;
}

Lista::~Lista(){
    
}

bool Lista::Empty(){
    return (list == NULL);
}

void Lista::AtBegin (string value){
    nuevo = new Nodo(value);
    if (Empty())
    {
        list = nuevo;
        end = list;
    }
    else
    {
        list->back = nuevo;
        nuevo->next = list;
        list = nuevo;
    }
    count++;
}

