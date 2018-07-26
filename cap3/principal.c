#include <stdio.h>
#include "funciones.h"
#include "funciones.c"
// Programa principal
int main(){
  double v, a;
  printf("Ingrese un valor numerico-> ");
  scanf("%lf", &v);
  // invoco a la funcion
  a = valorAbsoluto(v);
  printf("El valor absoluto de %.1f es %.1f\n", v, a);
  return 0;
}
