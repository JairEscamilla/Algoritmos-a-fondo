#include <stdio.h>
#include <string.h>
#include "alumnos.h"
Alumno ingresoDatosXConsola();
int main(){
  FILE* arch = fopen("ALUMNOS.dat", "r+b");

  Alumno reg = ingresoDatosXConsola();

  fseek(arch, 0, SEEK_END);
  fwrite(&reg, sizeof(Alumno), 1, arch);

  fclose(arch);

  return 0;
}

Alumno ingresoDatosXConsola(){
  int matricula, nota;
  char nombre[20];

  printf("Ingrese nueva matricula: ");
  scanf("%d", &matricula);

  printf("Ingrese nuevo nombre: ");
  scanf("%s", nombre);

  printf("Ingrese nueva nota: ");
  scanf("%d", &nota);

  Alumno a;
  a.matricula = matricula;
  strcpy(a.nombre, nombre);
  a.nota = nota;

  return a;
}
