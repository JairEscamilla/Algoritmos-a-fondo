#include <stdio.h>
int main(){
  int a[5] = {1, 2, 3, 4, 5};
  int inf, sup, mitad, dato;
  char band = 'F';

  dato = 3;
  inf = 0;
  sup = 5;
  while (inf <= sup) {
    mitad = (inf+sup)/2;
    if (a[mitad] == dato) {
      band = 'V';
      break;
    }
    if (a[mitad] > dato) {
      sup = mitad;
    }
    if (a[mitad] < dato) {
      inf = mitad;
    }
  }
  if (band == 'F') {
    printf("El numero no existe en la lista\n");
  }else{
    printf("El numero fue encontrado en la posicion %d\n", mitad);
  }
}
