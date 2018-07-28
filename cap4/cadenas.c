#include <stdio.h>

// PROTOTIPO DE LAS FUNCIONES
void copiarCadena(char[], char[]);
int longitud(char[]);
int esVacia(char[]);

// FUNCION PRINCIPAL
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

  // TEST DE CADENAS VACIAS
  char a[20] = { 0 };
  char b[20] = "Hola";
  char c[20] = "\0 que pasa ahora?";

  printf("a = [%s] es vacia? %d\n", a, esVacia(a));
  printf("b = [%s] es vacia? %d\n", b, esVacia(b));
  printf("c = [%s] es vacia? %d\n", c, esVacia(c));

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

int esVacia(char s[]){
  return s[0] == '\0';
}
