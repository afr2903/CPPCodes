#include <iostream>
using namespace std;
int main(){
    int a, d, s;//alumnos,dias,suma
    cin>>a>>d;
    int e[a];//arreglo p/alumnos
    for(int y=0; y<a; y++){
        e[y]=0;//inicializar el arreglo en cero
    }
    for(int x=1; x<=d; x++){//dias
        for(int z=0; z<a; z++){//alumnos
            cin>>s;
            if(s==1){
                e[z]++;//sumarle uno al arreglo
            }
        }
    }
    int g[a];
    int p=0;
    s=0;
    for(int y=0; y<a; y++){
        g[y]=0;
    }
    for(int y=0; y<a; y++){
        if(e[y]==s){
            if(s>0){
                p++;
            }
            g[p]=y+1;
        }
        if(e[y]>s){
            g[p]=y+1;
            s=e[y];
        }
    }
    for(int x=0; x<a; x++){
        if(g[x]>0){
            cout<<g[x]<<" ";
        }
    }
}
