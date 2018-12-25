#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	int valor;
	struct Nodo* sig;
}Nodo;

void poner(Nodo**, int);
int sacar(Nodo**);

int main(){
	
	Nodo* p = NULL;
	poner(&p, 5);
	poner(&p, 6);
	poner(&p, 7);
	printf("%d, ", sacar(&p));
	printf("%d, ", sacar(&p));
	printf("%d, ", sacar(&p));
	printf("\n");
	return 0;
}

void poner(Nodo** p, int v){
	Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
	nuevo->valor = v;
	nuevo->sig = *p;
	*p = nuevo;
}

int sacar(Nodo** p){
	Nodo* aux = *p;
	int ret = aux->valor;

	*p = aux->sig;
	free(aux);
	return ret;
}