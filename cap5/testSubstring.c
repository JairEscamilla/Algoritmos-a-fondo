#include <stdio.h>
#include "cabecera.h"
#include "cads.c"

// FUNCION PRINCIPAL
int main(){
  char* x= "Esto es una cadena";
  printf("%s\n", substring(x, 0, 4));
  printf("%s\n", substring(x, 8, 11));

  return 0;
}
