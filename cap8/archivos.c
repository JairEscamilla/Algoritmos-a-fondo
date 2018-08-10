#include <stdio.h>
int main(){
  // Abro el archivo
  FILE* arch = fopen("DEMO.dat", "w+b");
  char c;

  // Escribo una A
  c = 'A';
  fwrite(&c, sizeof(char), 1, arch);

  // Escribo una B
  c = 'B';
  fwrite(&c, sizeof(char), 1, arch);

  // Escribo una c
  c = 'C';
  fwrite(&c, sizeof(char), 1, arch);

  // Cierro el archivo
  fclose(arch);
  return 0;
}
