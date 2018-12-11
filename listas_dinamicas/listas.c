#include <stdio.h>
#include <stdlib.h>
// Definimos el nodo
typedef struct Nodo{
  int valor; // Valor que contiene el nodo
  struct Nodo* sig; // Referencia al siguiente nodo
}Nodo;

// Funcion prototipo
void agregar(Nodo** p, int v);
void liberar(Nodo** p);
void mostrar(Nodo* p);
Nodo* buscar(Nodo* p, int v);
// Funcion principal
int main(){
  // Inicializamos la lista
  Nodo* p = NULL;
  // Le asignamos valores
  agregar(&p, 5);
  agregar(&p, 8);
  agregar(&p, 7);
  agregar(&p, 3);
  agregar(&p, 9);
  mostrar(p);
  liberar(&p);
  return 0;
}
// Desarrollo de la funcion
void agregar(Nodo** p, int v){
  // Creamos el nuevo nodo
  Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
  nuevo->valor = v;
  nuevo->sig = NULL;
  // Si la losta esta vacia, entonces hacemos que p apunte al nuevo nodo
  if(*p == NULL){
    *p = nuevo;
  }else{
    Nodo* aux = *p;
    // recorremos la lista hasta llegar al ultimo nodo
      while (aux->sig != NULL) {
        // Avanzamos a aux al proximo nodo
        aux = aux->sig;
      }
      // como aux apunta al ultimo, entonces su siguiente sera el nuevo nodo
      aux->sig = nuevo;
  }
}

void liberar(Nodo** p){
  while (*p != NULL) {
    Nodo* prox = (*p)->sig;
    free(*p);
    *p = prox;
  }
}

void mostrar(Nodo* p){
  Nodo *aux = p;
  while (aux != NULL) {
    printf("%d, ", aux->valor);
    aux = aux->sig;
  }
  printf("\n");
}
Nodo* buscar(Nodo* p, int v){
  Nodo* aux = p;
  while ((aux != NULL) && (aux->valor != v)) {
    aux = aux->sig;
  }
  return aux;
}
