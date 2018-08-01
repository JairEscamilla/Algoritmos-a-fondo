#include <stdio.h>
int main(){
  int v;
  int a[10];
  // Leemos los datos que ingresa el usuarios
  for(int i = 0; i < 10; i++){
    printf("Ingrese un valor numerico (%d): ", i+1);
    scanf("%d", &v);
    a[i] = v;
  }
  // mostramos el conjunto en el orden original
  printf("Orden original~> ");
  for(int i = 0; i < 10; i++){
    printf("%d, ", a[i]);
  }
  printf("\n");

  // Mostramos el conjunto en orden inverso
  printf("Orden inverso~> ");
  for(int i = 9; i >= 0; i--){
    printf("%d, ", a[i]);
  }
  printf("\n");
  return 0;
}
