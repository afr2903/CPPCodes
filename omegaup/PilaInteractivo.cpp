#include "PilaInteractivo.h"

int pila[10000],i=0;

void agrega(int n) {
	pila[i++]=n;
}

int saca() {
    if(i==0)return -1;
	i--;
	return pila[i];
}
