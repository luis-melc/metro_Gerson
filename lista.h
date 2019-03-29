#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Nodo
{
  string value;
  Nodo * next;
  Nodo * back;

  Nodo(string val) : value(val), next(NULL), back(NULL) {}
};

class Lista
{
private:
  Nodo * list;
  Nodo * end;
  Nodo * nuevo;
  Nodo * aux;
  int count;

public:
  Lista();
  ~Lista();
  bool Empty();
  void AtBegin(string);
  void Show(bool);
  void Route(Lista,vector<string>);
  int Find(string);
};