#include <stdio.h>
#include <stdlib.h>
#include <string.h>
class Cadena{
  // Variable de instancia
  private: char* cad;
  // constructor
  public: Cadena(const char* cadInicial){
    // Aqui va el codigo del constructor
    cad = (char*)malloc(sizeof(char)*strlen(cadInicial)+1);
    strcpy(cad, cadInicial);
  }
  public: ~Cadena(){
    // Aqui va el codigo del destructor
    free(cad);
  }
  // Metodo para concatenar
  public: Cadena* concatenar(const char* cadConcat){
    int size = strlen(cad) + strlen(cadConcat) + 1;
    char* aux = (char*)malloc(sizeof(char)*size);
    strcpy(aux, cad);
    strcat(aux, cadConcat);
    cad = aux;
    return this;
  }
  // Metodo toString
  public: char* toString(){
    return cad;
  }
};
