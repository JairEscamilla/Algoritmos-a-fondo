#include <stdio.h>
int main(){
  int a, b;
  double c;
  printf("Ingresa dos valores: \n" );
  scanf("%d %d", &a, &b);
  if (b == 0) {
    printf("Error, no puedo dividir por 0\n");
  }else{
    c = (double)a/b;
    printf("%d / %d = %1f\n", a, b, c);
  }
  return 0;
}
