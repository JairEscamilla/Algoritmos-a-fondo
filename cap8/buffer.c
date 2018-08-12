#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  // Creo un buffer
  int bufferLen = 3;
  char* buffer = (char*)malloc(bufferLen);

  // Abro el archivo
  FILE* f = fopen("ALUMNOS.dat", "r+b");

  // Tomo la hora actual
  time_t t1 = time(NULL);
  // Leo bufferLen bytes
  int n = fread(buffer, 1, bufferLen, f);
  int i = 0;
  while (n == bufferLen) {
    i+= bufferLen;
    n = fread(buffer, 1, bufferLen, f);
  }
  i+= n;
  fclose(f);
  time_t t2 = time(NULL);

  double secs = difftime(t2, t1);
  printf("Total de bytes leidos: %d\n", i);
  printf("%.01f segundos, buffer= %d bytes\n", secs, bufferLen);

  return 0;
}
