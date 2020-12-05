#include "rafita.h"


int Votacion(int N, int S[]) {
	int l=0,p=0;
	for(int i=0;i<N;i++){
        if(S[i]==1)l++;
        else p++;
	}
	if(l>p)return 0;
	return 1;
}
