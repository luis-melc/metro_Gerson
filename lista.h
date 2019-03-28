#include <iostream>
#include <string>

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
  void FindHalf(int&);

public:
  Lista();
  ~Lista();
 bool Empty();
 // int Find(int);
  void AtBegin(string);
  void Show();

 /* void AtEnd(int);
  void InsertBefore(int, int);
  void InsertAfter(int, int);
  void InsertX(int, int);
  void DeleteBegin();
  void DeleteEnd();
  void DeleteBefore(int);
  void DeleteAfter(int);
  void DeleteX(int);
  void DeleteAllX(int);
  void BubbleSort();
  void ShakerSort();
  void InsertionSort();
  void BinarySort();
  void SelectionSort();
  void ShellSort();
  int& At(int);
  void Clear();*/
};