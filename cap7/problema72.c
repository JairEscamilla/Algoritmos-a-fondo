#include <stdio.h>
#include "prototipos.h"
#include "problema72f.c"

int main(){
  // Variables para la lectura de datos
  long nroFactura;
  int dia;
  double importe;
  char codCliente[5];

  // Array de acumuladores
  double acumDia[31];

  // Inicializo el array
  inicializarArray(acumDia);

  // Leo la primer fila de la tabla
  scanf("%ld %d %lf %s", &nroFactura, &dia, &importe, codCliente);
  while (nroFactura > 0) {
    acumDia[dia-1] = acumDia[dia-1]+importe;
    scanf("%ld %d %lf %s", &nroFactura, &dia, &importe, codCliente);
  }
  mostrarTotales(acumDia);
  diaMayor(acumDia);

  return 0;
}
