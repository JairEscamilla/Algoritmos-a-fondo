#include <stdio.h>
#include "cabeceras.h"
#include "arrays.c"
int main(){
  int arr[50];
  int len = 0;
  agregar(arr, &len, 3);
  agregar(arr, &len, 5);
  agregar(arr, &len, 7);
  agregar(arr, &len, 9);
  for(int i = 0; i < len; i++){
    printf("%d\n", arr[i]);
  }
  printf("3 esta en la posicion %d\n", buscar(arr, len, 3));
  printf("5 esta en la posicion %d\n", buscar(arr, len, 5));
  printf("7 esta en la posicion %d\n", buscar(arr, len, 7));
  printf("9 esta en la posicion %d\n", buscar(arr, len, 9));
  return 0;
}
