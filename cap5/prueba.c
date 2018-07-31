#include <stdio.h>
// PROTOTIPOS DE LAS FUNCIONES
void recibeArray(char[]); // Recibe un char[]
void recibePuntero(char*); // Recibe un char*
// FUNCION PRINCIPAL
int main(){
  char s[] = "Esta es una cadena";
  recibeArray(s);
  recibePuntero(s);
  return 0;
}

void recibeArray(char x[]){
  printf("x = %s\n", x);
  printf("x[3] = %c\n", x[3]);
}

void recibePuntero(char* x){
  printf("x = %s\n", x);
  printf("x[3] = %c\n", x[3]);
}
