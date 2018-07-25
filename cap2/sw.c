#include <stdio.h>
#include <string.h>
int main(){
  int n;
  char dia[10];
  printf("Ingrese el dia de la semana: ");
  scanf("%d", &n);
  switch (n) {
    case 1:
      strcpy(dia, "Lunes");
      break;
    case 2:
      strcpy(dia, "Martes");
      break;
    case 3:
      strcpy(dia, "Miercoles");
      break;
    case 4:
      strcpy(dia, "Jueves");
      break;
    case 5:
      strcpy(dia, "Viernes");
      break;
    case 6:
      strcpy(dia, "Sabado");
      break;
    case 7:
      strcpy(dia, "Domingo");
      break;
  }
  printf("%d es %s\n", n, dia);
  return 0;
}
