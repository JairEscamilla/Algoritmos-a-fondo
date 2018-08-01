#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// PROTOTIPO DE LA FUNCION
char* obtenerSaludo();
// Cuerpo de la funcion
char* obtenerSaludo(){
  // cadena local
  char a[] = "Hola mundo";
  // longitud de la cadena que vamos a retornar
  int n = strlen(a);
  // Array de n+1 caracteres generado dinamicamente
  char* r = (char*) malloc(n+1);
  // Asigna la cadena al array gestionado dinamicamente
  strcpy(r, a);
  return r;
}

// FUNCION PRINCIPAL
int main(){
  char* s = obtenerSaludo();
  printf("%s\n", s);
  return 0;
}
