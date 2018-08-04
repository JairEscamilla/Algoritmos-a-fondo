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
  return 0;
}
