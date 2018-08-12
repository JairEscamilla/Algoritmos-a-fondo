#include <stdio.h>
#include <string.h>
#include "alumnos.h"

// PROTOTIPO DE LA FUNCION
Alumno ingresoDatosXConsola();

// FUNCION PRINCIPAL
int main(){
  FILE* arch = fopen("ALUMNOS.dat", "r+b");
  int n;
  printf("Ingrese un numero de registro: ");
  fflush(stdout);
  scanf("%d", &n);
  // Ingreso los nuevos datos por consola
  Alumno reg = ingresoDatosXConsola();

  // Posiciono el identificador de posicion
  fseek(arch, n*sizeof(Alumno), SEEK_SET);

  // Grabo el registro pisando los valores anteriores
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
