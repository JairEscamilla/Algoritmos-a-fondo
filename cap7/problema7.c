#include <stdio.h>
#include "problema7.h"
#include "problema7f.c"

int main(){
  int aCont[100];
  int v;

  // inicializo el array
  inicializarContadores(aCont);
  printf("Ingrese un valor: ");
  scanf("%d", &v);
  while (v >= 0) {
    aCont[v] = aCont[v] + 1;
    printf("Ingrese un valor: ");
    scanf("%d", &v);
  }

  // Muestro resultados
  mostrarResultados(aCont);
}
