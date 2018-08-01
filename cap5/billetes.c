#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// PROTOTIPO DE FUNCION
void procesarBilletes(int*, int);
// FUNCION PRINCIPAL
int main(){
  // decalaramos una cadena con las diferentes denominaciones
  char denominaciones[] = "100|50|20|10|5|2|1";
  int v;
  // Ingreso del sueldo a pagar
  printf("Ingrese el valor a pagar-> $");
  scanf("%d", &v);
  // Tokenizamos la cadena y procesamos cada uno de sus tokens
  char* tok = strtok(denominaciones, "|");
  while (tok != NULL) {
    procesarBilletes(&v, atoi(tok));
    tok = strtok(NULL, "|");
  }
  return 0;
}
// Cuerpo de la funcion
void procesarBilletes(int* v, int denom){
  int cant = *v / denom;
  *v = *v % denom;
  printf("%d billetes de $%d\n", cant, denom);
}
