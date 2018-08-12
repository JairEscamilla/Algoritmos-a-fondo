#include <stdio.h>
#include "alumnos.h"
int main(){
  FILE* arch = fopen("ALUMNOS.dat", "r+b");
  int n;
  printf("Ingrese numero de registro: ");
  scanf("%d", &n);

  // Posiciono el puntero del archivo
  fseek(arch, n*sizeof(Alumno), SEEK_SET);

  // Con el puntero posicionado leo el registro
  Alumno reg;
  fread(&reg, sizeof(Alumno), 1, arch);

  // Muestro los datos
  printf("Matricula: %d\n", reg.matricula);
  printf("Nombre: %s\n", reg.nombre);
  printf("Nota: %d\n", reg.nota);

  fclose(arch);

  return 0;
}
