#include<bits/stdc++.h>
using namespace std;
int b=1,i,n;
long int numirico[1000],enteral[1000],izq[1000],der[1000];
void insertar(int a){
    if(numirico[i]>=numirico[a]){
        if(der[a]==0)der[a]=i;
        else insertar(der[a]);
    } else{
        if(izq[a]==0)izq[a]=i;
        else insertar(izq[a]);
    }
}
void buscar(int a){
    if(n==numirico[a])cout<<enteral[a];
    else if(n>numirico[a]){
        if(der[a]==0)cout<<"C?";
        else buscar(der[a]);
    }
    else{
        if(izq[a]==0)cout<<"C?";
        else buscar(izq[a]);
    }
}
int main(){
    int d,w;
    cin>>d>>w;
    cin>>numirico[0]>>enteral[0];
    for(i=1;i<d;i++){
        cin>>numirico[i]>>enteral[i];
        insertar(0);
    }
    for(i=0;i<w;i++){
        cin>>n;
        buscar(0);
        cout<<"\n";
    }
}
