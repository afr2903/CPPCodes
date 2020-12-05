#include "ColaInteractivo.h"

int cola[10000],i=0,f=0;

void agrega(int n) {
	cola[f++]=n;
}

int saca() {
	if(i==f)return -1;
	return cola[i++];
}
