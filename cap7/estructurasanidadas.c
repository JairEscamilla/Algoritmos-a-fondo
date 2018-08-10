#include <stdio.h>
#include <string.h>

typedef struct Direccion{
  char calle[50];
  int numero;
  int piso;
  char depto;
}Direccion;

typedef struct Persona{
  char nombre[50];
  long dni;
  Direccion direccion;
}Persona;

int main(){
  Direccion d;
  strcpy(d.calle, "Los Patos");
  d.numero = 222;
  d.depto = 'A';
  d.piso = 12;

  Persona p;
  strcpy(p.nombre, "Pablo");
  p.dni = 23354212;
  p.direccion = d;

  return 0;
}
