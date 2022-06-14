#include <iostream>
#include <string>
#include <locale>
#include "lista.h"
using namespace std;

string Uppercase(string);

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

void Lista::Show(bool op)
{
  if (!Empty())
  {
    if (op) {
      aux = end;
      while (aux != NULL)
      {
        if(aux->back == NULL)
          cout << aux->value;
        else
          cout << aux->value << "->";
        aux = aux->back;
      }
    }
    else
    {
      aux = list;
      while (aux != NULL)
      {
        if(aux->next == NULL)
          cout << aux->value;
        else
          cout << aux->value << "->";
        aux = aux->next;
      }
    }
    cout << endl << endl;
  }
  else
    cout << "Lista Vacia.";
  cout << endl;
  cout << endl;
}

void  Lista::Route(Lista line,vector<string> data){
  int noStationStart,noStationEnd;
  aux = list;
  Lista route = Lista();
  noStationStart = line.Find(data[1]);
  noStationEnd = line.Find(data[2]);
  if (noStationStart == -1 || noStationEnd == -1)
    cout << "Error el nombre de la estacion de partida o destino es erronea" << endl;
  else
  {
    if (noStationStart < noStationEnd){
      cout << "\tToma direccion " << end->value << endl;  
      for(int i = 0; i <= noStationEnd; i++)
      {
        if(i >= noStationStart)
          route.AtBegin(aux->value);
        aux = aux->next;
      }
      route.Show(true);
    }
    else{
      cout << "\tToma direccion " << aux->value << endl;  
      for(int i = 0; i <= noStationStart; i++)
      {
        if(i >= noStationEnd)
          route.AtBegin(aux->value);
        aux = aux->next;
      }
      route.Show(false);
    }
  }
}

int Lista::Find(string station){
  string STATION = station,VALUE;
  int pos = -1;
  aux = list;
  STATION = Uppercase(station);
  for (int i = 0; aux != NULL; i++)
  {
    VALUE = Uppercase(aux->value);
    if (VALUE == STATION)
    {
      pos = i;
      break;
    }
    aux = aux->next;
  }
  return pos;
}

string Uppercase(string cadena){
  string CADENA = cadena;
  locale loc;
  for(int i = 0; i < cadena.size(); i++)
    CADENA[i] = toupper(CADENA[i],loc);
  return CADENA;
}

