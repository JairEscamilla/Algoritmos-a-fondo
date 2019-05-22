#include <stdio.h>
#include <stdlib.h>

// Estructura Nodo
typedef struct Nodo{
  int valor;
  struct Nodo* sig;
}Nodo;

class Pila{
  private: Nodo* p;
  public: Pila(){
    p = NULL;
  }
  public: void poner(int v){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->valor = v;
    nuevo->sig = p;
    p = nuevo;
  }
  public: int sacar(){
    Nodo* aux = p;
    int ret = aux->valor;
    p = aux->sig;
    free(aux);
    return ret;
  }
};
