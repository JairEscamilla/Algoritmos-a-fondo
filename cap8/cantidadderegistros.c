#include <stdio.h>
#include "alumnos.h"
int main(){
  FILE* arch = fopen("ALUMNOS.dat", "r+b");
  int cantReg = fileno(arch)/sizeof(Alumno);
  printf("El archivo tiene %d registros.\n", cantReg);
  return 0;
}
