#include <stdlib.h>
#include <stdio.h>
#include "Pila.h"
#include "Cadena.h"

int main(){
  // Una pila de enteros
  Pila <int>* pila1 = new Pila<int>();
  pila1->poner(3);
  pila1->poner(2);
  pila1->poner(1);
  printf("%d\n", pila1->sacar());
  printf("%d\n", pila1->sacar());
  printf("%d\n", pila1->sacar());

  // Una pila de doubles
  Pila <double>* pila2 = new Pila<double>();
  pila2->poner(3.2);
  pila2->poner(2.5);
  pila2->poner(1.4);
  printf("%lf\n", pila2->sacar());
  printf("%lf\n", pila2->sacar());
  printf("%lf\n", pila2->sacar());

  // Una pila de cadenas
  Pila <Cadena*>* pila3 = new Pila<Cadena*>();
  pila3->poner(new Cadena("tres"));
  pila3->poner(new Cadena("dos"));
  pila3->poner(new Cadena("uno"));
  printf("%s\n", (pila3->sacar())->toString());
  printf("%s\n", (pila3->sacar())->toString());
  printf("%s\n", (pila3->sacar())->toString());


  return 0;
}
