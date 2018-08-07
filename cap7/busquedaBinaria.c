#include <stdio.h>
// PROTOTIPO DE LA FUNCION
int busquedaBinaria(int a[], int len, int v, int* enc);
// DESARROLLO DE LA FUNCION
int busquedaBinaria(int a[], int len, int v, int* enc){
  int i = 0;
  int j = len-1;
  int k = (i+j)/2;
  int encontrado = 0;
  while (!encontrado && i <= j) {
    if (a[k] > v ) {
      j = k-1;
    }else{
      if (a[k] < v) {
        i = k+1;
      }else{
        encontrado = 1;
      }
    }
    k = (i+j)/2;
  }
  *enc = encontrado;
  return k;
}

// FUNCION PRINCIPAL
int main(){
  // Defino un array de enteros y ordenado
  int arr[50] = {1, 4, 7, 9, 10, 12};
  int len = 6;
  int v, pos, enc;
  for(int i = -3; i < 15; i++){
    pos = busquedaBinaria(arr, len, i, &enc);
    printf("%d", i);
    if (enc ) {
      printf("[encontrado], ");
    }else{
      printf("[NO encontrado], ");
    }
    printf("pos = %d\n", pos);
  }

  return 0;
}
