#include <stdio.h>
#include <string.h>
#include "alumnos.h"

int main(){
  // Abro el archivo
  FILE* arch = fopen("ALUMNOS.dat", "w+b");
  Alumno a;
  // Grabo un alumno
  a = crearAlumno(10, "Pablo", 7);
  fwrite(&a, sizeof(Alumno), 1, arch);

  a = crearAlumno(20, "Juan", 5);
  fwrite(&a, sizeof(Alumno), 1, arch);

  a = crearAlumno(30, "Pedro", 8);
  fwrite(&a, sizeof(Alumno), 1, arch);

  // Cierro el archivo
  fclose(arch);

  return 0;
}

// CUERPO DE LA FUNCION
Alumno crearAlumno(int mtr, char nom[], int nota){
  Alumno x;
  x.matricula = mtr;
  strcpy(x.nombre, nom);
  x.nota = nota;
  return x;
}
