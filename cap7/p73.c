#include <stdio.h>
#include "cabeceras.h"
#include "p73.h"
#include "arrays.c"
#include "p73f.c"
int main(){
  int aNum[100], aCont[100];
  int len = 0;
  inicializarContadores(aCont);
  int v;
  printf("Ingrese un valor: ");
  scanf("%d", &v);
  int enc, pos;
  while (v != 0) {
    pos = buscarYagregar(aNum, &len, v, &enc);
    aCont[pos] = aCont[pos] + 1;

    printf("Ingrese un valor: ");
    scanf("%d", &v);
  }
  mostrarResultados(aNum, len, aCont);
  return 0;
}
