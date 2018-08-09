#include <stdio.h>
typedef struct Empleado{
  int matricula;
  int edad;
}Empleado;

int main(){
  Empleado e;
  e.matricula = 123;
  e.edad = 23;
  printf("%d\n", e.edad);
  return 0;
}
