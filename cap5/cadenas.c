#include <stdio.h>
#include <string.h>
// PROTOTIPO DE LA FUNUCION
int esPrefijo(char *, char*);
int esSufijo(char *, char *);
// FUNCION PRINCIPAL
int main(){
  char a[] = "Esto es una cadena";
  char b[] = "Esto";
  char c[] = "ena";
  printf("[%s] es prefijo de [%s]? %d\n", b, a, esPrefijo(a, b));

  printf("[%s] es sufijo de [%s]? %d\n", b, a, esSufijo(a, b));

  printf("[%s] es sufijo de [%s]? %d\n", c, a, esSufijo(a, c));

  return 0;
}

int esPrefijo(char* x, char* p){
  int n = strlen(p);
  return strncmp(x, p, n) == 0;
}

int esSufijo(char* x, char*s){
  int desde = strlen(x) - strlen(s);
  return strcmp(s, x + desde) == 0;
}
