#include <stdio.h>
// PROTOTIPO DE LA FUNCION
void ordenar(int a[], int len);

// DESARROLLANDO LA FUNCION
void ordenar(int a[], int len){
  int ordenado = 0;
  while (!ordenado) {
    ordenado = 1;
    for(int i = 0; i < len-1; i++){
      if (a[i] > a[i+1]) {
        int aux = a[i];
        a[i] = a[i+1];
        a[i+1] = aux;
        ordenado = 0;
      }
    }
  }
}

// FUNCION PRINCIPAL
int main(){
  int a[] = {5, 4, 3, 2, 1};
  int len = 5;
  ordenar(a, len);
  for(int i = 0; i < len; i++){
    printf("%d\n", a[i]);
  }
  return 0;
}
