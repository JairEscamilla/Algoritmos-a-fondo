#include <stdio.h>
// prototipo de la funcion
double valorAbsoluto(double);
// programa principal
int main(){
  double v, a;
  printf("Ingrese un valor numerico-> ");
  scanf("%lf", &v);
  // Invoco a la funcion
  a = valorAbsoluto(v);
  printf("El valor absoluto de %.1f es %.1f\n", v, a);
  return 0;
}
// Desarrollo de la funcion
double valorAbsoluto(double d){
  return d < 0? -d:d;
}
