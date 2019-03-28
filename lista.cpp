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

void Lista::Show()
{
  if (!Empty())
  {
    aux = list;
    while (aux != NULL)
    {
      cout << aux->value << "->";
      aux = aux->next;
    }
    cout << endl;
    aux = end;
    while (aux != NULL)
    {
      cout << aux->value << "->";
      aux = aux->back;
    }
    cout << endl << endl;
  }
  else
    cout << "Lista Vacia.";
  cout << endl;
}

