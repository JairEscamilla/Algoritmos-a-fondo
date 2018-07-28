#include <stdio.h>

// PROTOTIPO DE LA FUNCION
void copiarCadena(char[], char[]);

int main(){
  char s[10] = "Pablo";
  char t[] = "Juan";
  char w[10] = { 0 };
  printf("s = [%s]\n", s);
  printf("t = [%s]\n", t);
  printf("w = [%s]\n", w);
  char nom[15];
  // Asigno la cadena Pablo a nom
  copiarCadena(nom, "Pablo");
  printf("nom = %s\n", nom);

  return 0;
}

void copiarCadena(char t[], char s[]){
  int i = 0;
  while (s[i] != '\0') {
    t[i] = s[i];
    i+= 1;
  }
  t[i] = '\0';
 }
