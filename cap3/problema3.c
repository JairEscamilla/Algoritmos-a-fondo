#include <stdio.h>
#include "problema3.h"
#include "problema3f.c"
// programa principal
int main(){
    long fecha;
    int dia, mes, anio;
    int cantMarzo, cantBisiesto, cantError;
    int anioBisiesto, hayError;
    cantMarzo = 0;
    cantBisiesto = 0;
    cantError = 0;
    printf("Fecha: ");
    scanf("%ld", &fecha);
    while (fecha != 0) {
      dividirFecha(fecha, &dia, &mes, &anio);
      anioBisiesto = esAnioBisiesto(anio);
      if (mes == 3) {
        cantMarzo+= 1;
      }
      if (esAnioBisiesto) {
        cantBisiesto+= 1;
      }
      hayError = (dia==29) && (mes == 2) & !esAnioBisiesto;
      if (hayError) {
        cantError += 1;
      }
      printf("Fecha: ");
      scanf("%ld", &fecha);
    }
    printf("Fechas de marzo: %d\n", cantMarzo);
    printf("Anios bisiestos: %d\n", cantBisiesto);
    printf("Fechas de error: %d\n", cantError);
    return 0;
  }
