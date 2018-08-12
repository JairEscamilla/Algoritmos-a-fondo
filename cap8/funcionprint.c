#include <stdio.h>
#include <string.h>
int main(){
  FILE* f1 = fopen("Try.dat", "w+");
  char linea[100];
  printf("--> ");
  fgets(linea, 100, stdin);
  int i = 0;
  while (strcmp(linea, "FIN")) {
    fprintf(f1, "%d, %s\n", i++, linea);
    printf("--> ");
    fgets(linea, 100, stdin);
  }
  fclose(f1);
  return 0;
}
