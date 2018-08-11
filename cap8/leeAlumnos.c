#include <stdio.h>
#include <string.h>
#include "alumnos.h"
int main(){
  FILE* arch;
  Alumno a;

  arch = fopen("ALUMNOS.dat", "r+b");

  fread(&a, sizeof(Alumno), 1, arch);

  while (!feof(arch)) {
    printf("%d, %s, %d\n", a.matricula, a.nombre, a.nota);
    fread(&a, sizeof(Alumno), 1, arch);
  }

  fclose(arch);
  return 0;
}
