#include<iostream>
#include<string>
#define MAX 101
#define mitad(a,c) (c-a)/2+a
using namespace std;
struct usuario{
    string nombre;
    int puntaje;
}usuarios[MAX];
int s=2;
int buscarUsuario(int);
void insertar(string,int,int);
int main(){
    string n;
    int p;
    cin>>n>>p;
    int c=buscarUsuario(21);
    cout<<c<<"\n";
    insertar(n,p,c);
    for(int i=1;i<=s;i++)cout<<usuarios[i].nombre<<" "<<usuarios[i].puntaje<<"\n";
}
int buscarUsuario(int p){
    int a=1,b,c=s;
    while(c-1!=a){
        b=mitad(a,c);
        if(usuarios[b].puntaje>p)c=b;
        else if(usuarios[b].puntaje<p)a=b;
        else break;//rompe while;    continue rompe if
    }
    return b;
}
void insertar(string n,int p, int c){
    for(int i=++s;i>c;i--){
        usuarios[i].nombre=usuarios[i-1].nombre;
        usuarios[i].puntaje=usuarios[i-1].puntaje;
    }
    usuarios[c].nombre=n;
    usuarios[c].puntaje=p;
}
