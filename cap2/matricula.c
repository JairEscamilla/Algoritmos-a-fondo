#include <stdio.h>
#include <string.h>
int main(){
  int cantPres, sumNota, maxNota;
  int mtr, nota;
  char nom[11], nomMax[11];
  // Inicializar las variables
  cantPres = 0;
  sumNota = 0;
  maxNota = 0;
  printf("Ingrese la matricula, nota, nombre-> ");
  scanf("%d %d %s", &mtr, &nota, nom);
  while (mtr != 0) {
    cantPres += 1;
    sumNota += nota;
    if (nota > maxNota) {
      maxNota = nota;
      strcpy(nomMax, nom);
    }
    printf("Ingrese matricula, nota, nombre-> ");
    scanf("%d %d %s", &mtr, &nota, nom);
  }
  // cantidad de presentaciones
  printf("Cantidad de presentaciones: %d\n", cantPres);

  // nota promedio
  double prom = (double)sumNota/cantPres;
  printf("Nota promedio: %1f\n", prom);

  // mejor alumno
  printf("Alumno de mejor rendimiento %s, nota: %d\n", nomMax, maxNota);
  return 0;
}
