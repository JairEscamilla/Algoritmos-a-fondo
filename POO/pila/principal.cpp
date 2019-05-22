#include "Pila.h"
int main(){
  Pila* pila = new Pila();
  pila->poner(3);
  pila->poner(2);
  pila->poner(1);

  printf("%d\n", pila->sacar());
  printf("%d\n", pila->sacar());
  printf("%d\n", pila->sacar());

  return 0;
}
