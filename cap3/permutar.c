#include <stdio.h>
// Prototipo de la funcion permutar
void permutar(int, int);
// Programa principal
int main(){
    int a = 5, b = 10;
    // Muestra los valores de a y b
    printf("En main: a= %d, b = %d\n", a, b);
    // Invoco a la funcion para permutar los valores
    permutar(a, b);
    printf("En main: a= %d, b = %d\n", a, b);
    return 0;
}
void permutar(int x, int y){
  int aux;
  printf("... en permutar: x= %d, y = %d\n", x, y);
  // Permuto los valores
  aux = x;
  x = y;
  y = aux;
  printf("... en permutar: x= %d, y = %d\n", x, y);
}
