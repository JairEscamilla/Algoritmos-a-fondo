#include <stdio.h>
void incrementar();

// i es una variable global
int i = 0;
int main(){
  // puede utilizar i porque es global
  while (i < 10) {
    printf("%d\n", i);
    incrementar();
  }
  return 0;
}
void incrementar(){
  i = i +1;
}
