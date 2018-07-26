#include <stdio.h>
#include "numeros.h"
#include "numeros.c"
int main(){
  int n, cont, i;
  printf("Cuantos primos quieres ver ¿? -> ");
  scanf("%d", &n);
  cont = 0;
  i = 1;
  while (cont < n) {
    if (esPrimo(i)) {
      printf("%d\n", i);
      cont += 1;
    }
    i += 1;
  }
  return 0;
}
