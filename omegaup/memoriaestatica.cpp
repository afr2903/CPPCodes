#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int nodo[500], next[500];
void imprimirMenu(int i){
    i==0?cout<<">":cout<<" ";
    cout<<"Insertar al ultimo\n";
    i==1?cout<<">":cout<<" ";
    cout<<"Insertar en n\n";
    i==2?cout<<">":cout<<" ";
    cout<<"Borrar n\n";
    i==3?cout<<">":cout<<" ";
    cout<<"Buscar\n";
    i==4?cout<<">":cout<<" ";
    cout<<"Imprimir\n";
}
void imprimir(int n){
    if(next[n]==0)return;
    cout<<nodo[n]<<" ";
    imprimir(next[n]);
}
int main(){
    int b=1,i=0,a,f=1,s=0;
	char c;
	while(true){
		system("cls");
		imprimirMenu(i);
		c=getch();
		if(c=='s' || c=='S')
			i<4?i++:i=0;
		else if(c=='w' || c=='W')
			i>0?i--:i=4;
		else if(c==32){
            int j,p;
            bool z;
            switch(i){
                case 0:
                    system("cls");
                    cout<<"Valor: ";
                    cin>>nodo[b];
                    next[b]=b+1;
                    b++,s++;
                break;
                case 1:
                    system("cls");
                    cout<<"Valor: ";
                    cin>>nodo[b];
                    cout<<"Anterior: ";
                    cin>>a;
                    next[b]=next[a];
                    next[a]=b;
                    next[b-1]=b;
                    b++,s++;
                break;
                case 2:
                    system("cls");
                    cout<<"Posicion: ";
                    cin>>a;
                    s--;
                    if(a==1){
                        f=next[f];
                        break;
                    }
                    for(j=2,p=f;j<a;j++,p=next[p]);
                    next[p]=next[next[p]];
                break;
                case 3:
                    system("cls");
                    cout<<"Valor: ";
                    cin>>a;
                    for(j=0,p=f;j<s;p=next[p]){
                        if(nodo[p]==a)z=1;
                    }
                    if(z)cout<<"\n1";
                    else cout<<"\n0";
                break;
                case 4:
                    system("cls");
                    imprimir(f);
                    a=getch();
                break;
			}
		}
	}

}
