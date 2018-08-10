#include <stdio.h>
int main(){
  FILE* arch;
  char c;
  // Abro el archivo
  arch = fopen("DEMO.dat", "r+b");
  // Leo el primer caracter
  fread(&c, sizeof(char), 1, arch);
  // Y mientras no legue al final del archivo...
  while (!feof(arch)) {
    // Muestro el caracter leido
    printf("%c\n", c);
    fread(&c, sizeof(char), 1, arch);
  }

  // Cierro el archivo
  fclose(arch);
  return 0;
}
