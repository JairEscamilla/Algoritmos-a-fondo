#include <stdio.h>
int main(){
  int n, esPrimo;
  int num, cont;
  printf("Cuantos primos quieres ver ¿? -> ");
  scanf("%d", &n);
  num = 1;
  cont = 0;
  while (cont < n) {
    esPrimo = 1;
    for(int i = 2; i<num && esPrimo; i++ ){
      if (num%i == 0) {
        esPrimo = 0;
      }
    }
    if (esPrimo) {
      printf("%d\n", num);
      cont += 1;
    }
    num+= 1;
  }
  return 0;
}
