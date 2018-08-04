#include <stdio.h>
void inicializarArray(double arr[]){
  for(int i = 0; i < 31; i++){
    arr[i] = 0;
  }
}

void mostrarTotales(double arr[]){
  int dia;
  printf("Totales facturados (dia, monto)");
  for(int i = 0; i < 31; i++){
    if (arr[i] > 0) {
      dia = i+1;
      printf("%d, $%lf\n", dia, arr[i]);
    }
  }
}

void diaMayor(double arr[]){
  double max = 0;
  int dia;
  for(int i = 0; i < 31; i++){
    if (arr[i] > max) {
      max = arr[i];
      dia = i+1;
    }
  }
  printf("Dia de mayor facturacion: %d, $%lf\n", dia, max);
}
