#include "fecha.h"
#include "fecha.c"
#include <stdio.h>
int main(){
  // Creo las fechas
  Fecha f1 = crearFecha(2, 10, 1970);
  Fecha f2 = crearFecha(3, 8, 2010);
  // Obtengo sus representaciones con formato dd/mm/aaaa
  char* sF1 = toString(f1);
  char* sF2 = toString(f2);
  // Las comparo para ver cual es mayor
  if (compararFechas(f1, f2) < 0) {
    printf("%s es posterior a %s\n", sF2, sF1);
  }else{
    printf("%s es posterior a %s\n", sF1, sF2);
  }
}
