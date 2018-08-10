#include <stdio.h>
#include <string.h>

typedef struct Empleado{
  int matricula;
  char nombre[20];
}Empleado;
void cargarEmpleado(Empleado* e);
int main(){
  cargarEmpleado();
  return 0;
}

void cargarEmpleado(Empleado* e){
  (*e).matricula = 10;
  strcpy((*e).nombre, "Jair");
}
