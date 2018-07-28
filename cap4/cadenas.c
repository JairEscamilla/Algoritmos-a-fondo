#include <stdio.h>

// PROTOTIPO DE LAS FUNCIONES
void copiarCadena(char[], char[]);
int longitud(char[]);

int main(){
  char s[10] = "Pablo";
  char t[] = "Juan";
  char w[10] = { 0 };
  printf("s = [%s]\n", s);
  printf("t = [%s]\n", t);
  printf("w = [%s]\n", w);
  char nom[15];
  // Asigno la cadena Pablo a nom
  copiarCadena(nom, "Juan");
  printf("nom = %s\n", nom);
  printf("Longitud de %s = %d\n", "Pablo", longitud("Pablo"));
  printf("Longitud de %s = %d\n", nom, longitud(nom));

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

 int longitud(char t[]){
   int i = 0;
   while (t[i] != '\0') {
     i+= 1;
   }
   return i;
 }
