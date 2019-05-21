#include <stdio.h>
#include "Cadena.h"
int main(){
  // Definimos un objeto de tipo Cadena inicializando con "Hola, "
  Cadena* s = new Cadena("Hola, ");
  // Le concatenamos otra cadena
  s->concatenar(" que tal?");
  s->concatenar(" Todo bien?");

  // Mostramos su contenido
  printf("%s\n", s->toString());
  // Eliminamos el objeto, ya no lo necesitamos
  delete s;
  return 0;
}
