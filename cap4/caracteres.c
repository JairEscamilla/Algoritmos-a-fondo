#include <stdio.h>
// PROTOTIPOS DE FUNCIONES
int esDigito(char);
int esLetra(char);
int esMayuscula(char);
int esMinuscula(char);
char aMinuscula(char);
char aMayuscula(char);


// FUNCION PRINCIPAL
int main(){
    // Asigno a c el valor 65
    char c = 'A';
    printf("Como caracter: %c\n", c);
    printf("Valor numerico ASCII: %d\n", c);

    int i = 'A';
    printf("Como caracter: %c\n", i);
    printf("Valor numerico ASCII: %d\n", i);

    // PRUEBA DE FUNCIONES
    printf("esDigito(%c) = %d \n", c, esDigito(c));
    printf("esLetra(%c) = %d \n", c, esLetra(c));
    printf("esMayuscula(%c) = %d \n", c, esMayuscula(c));
    printf("esMinuscula(%c) = %d \n", c, esMinuscula(c));
    printf("aMinuscula(%c) = %c \n", c, aMinuscula(c));
    printf("aMayuscula(%c) = %c \n", c, aMayuscula(c));

    return 0;
}
int esDigito(char c){
    return c >= '0' && c <= '9';
}

int esLetra(char c){
  return c >= 'A' && c <= 'Z' ||  c >= 'a' && c <= 'z';
}

int esMayuscula(char c){
    return c >= 'A' && c <= 'Z';
}

int esMinuscula(char c){
  return c >= 'a' && c <= 'z';
}

char aMinuscula(char c){
  return esMayuscula(c)? c - 'A' + 'a': c;
}

char aMayuscula(char c){
  return esMinuscula(c)? c - 'a' + 'A': c;
}
