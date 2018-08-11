#include <stdio.h>
int main(){
  FILE* arch;
  char c;

  // Abro el archivo
  arch = fopen("DEMO.dat", "r+b");
  // Obtengo la posicion actual
  long pos = ftell(arch);

  // Leo el primer caracter
  fread(&c, sizeof(char), 1, arch);
  // Y mientras no llegue a final del archivo...

  while (!feof(arch)) {
    // Muestro el caracter leido
    printf("byte numero: %ld, %c\n", pos, c);

    // Obtengo la posicion actual
    pos = ftell(arch);
    //Leo el sig. caracter
    fread(&c, sizeof(c), 1, arch);
  }

  // Cierro el archivo
  fclose(arch);
  return 0;
}
