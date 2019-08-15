#include<stdio.h>

long factorial(int x);

int main(){
    int n;
    long f;
    // Pedimos un valor al usuario
    printf("Ingrese un valor: ");
    scanf("%d", &n);

    // Invocamos a la funcion factorial
    f = factorial(n);

    // Mostramos el resultado
    printf("El factorial de %d es %ld\n", n, f);
    return 0;
}

long factorial(int x){
    long ret;
    if (x == 0){
        ret = 1;
    }else{
        ret = x*factorial(x-1);
    }
    return ret;
}