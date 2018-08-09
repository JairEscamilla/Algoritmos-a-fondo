#include <stdio.h>
#include <string.h>
struct Empleado{
  int matricula;
  char nombre[20];
}
e = {123, "Jair"} ;
int main(){
  // Declaro la variablede tipo Empleado
  printf("Nombre: %s\n", e.nombre);
  return 0;
}
