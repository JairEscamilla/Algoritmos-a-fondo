#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n, cant, suma;
  double prom;
  printf("Ingrese un valor numerico-> ");
  scanf("%d", &n);
  cant = 0;
  suma = 0;
  while (n != 0) {
    suma = suma + n;
    cant+= 1;
    printf("Ingrese el siguiente valor-> ");
    scanf("%d", &n);
  }
  prom = (double)suma/cant;
  printf("El promedio es %1f\n", prom);
  return 0;
}
