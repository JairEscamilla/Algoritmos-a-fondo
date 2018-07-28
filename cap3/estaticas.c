#include <stdio.h>
int siguiente(){
  // Defino la variable estatica n, inicializandola en 0
  static int n = 0;
  n+= 1;
  return n;
}
int main(){
  // Invoco 10 veces a la funcion
  for(int i = 0; i < 10; i++){
    printf("%d, ", siguiente());
  }
  return 0;
}
