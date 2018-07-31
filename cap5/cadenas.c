#include <stdio.h>
#include <string.h>
// PROTOTIPO DE LA FUNUCION
int esPrefijo(char *, char*);
// FUNCION PRINCIPAL
int main(){
  char a[] = "Esto es una cadena";
  char b[] = "Esto";
  printf("[%s] es prefijo de [%s]? %d\n", b, a, esPrefijo(a, b));
  return 0;
}

int esPrefijo(char* x, char* p){
  int n = strlen(p);
  return strncmp(x, p, n) == 0;
}
