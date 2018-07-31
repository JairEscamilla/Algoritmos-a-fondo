#include <stdio.h>
int main(){
  char a[] = "Esto es una cadena";
  printf("[%s]\n", a);
  printf("[%s]\n", a + 5);
  printf("[%s]\n", a + 9);
  printf("[%s]\n", a + 12);

  return 0;
}
