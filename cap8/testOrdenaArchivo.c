#include <stdio.h>
#include "emp.h"
int main(){
  Emp arr[100];
  FILE* f;
  // Abro el arhivo, lo subo, lo ordeno y lo cierro
  f = fopen("EMP.dat", "r+b");
  int len = subirArchivo(f, arr);
  ordenar(arr, len);
  fclose(len);

  // Lo abro para escritura, lo bajo y lo cierro
  f = fopen("EMP.dat", "w+b");
  bajarArchivo(f, arr, len);
  fclose(f);
  return 0;
}
