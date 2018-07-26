#include <stdio.h>
int main(){
  int n, menor;
  int posReal, posRealMenor;
  printf("Ingrese un valor-> ");
  scanf("%d", &n);
  menor = n;
  posReal = 1;
  while (n != 0) {
    if (n < menor) {
      menor = n;
      posRealMenor = posReal;
    }
    posReal+= 1;
    printf("Ingrese un valor-> ");
    scanf("%d", &n);
  }
  printf("Menor valor: %d, posicion relativa: %d\n", menor, posRealMenor);
  return 0;
}
