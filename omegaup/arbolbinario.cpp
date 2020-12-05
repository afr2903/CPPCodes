#include<bits/stdc++.h>
using namespace std;
void insertar(int);
int vuzkr(int);
int nodo[1000000], izq[1000000], der[1000000];
int N,m,n,i,a;
int main(){
    cin>>N;
    for(i=0;i<N;i++){
        cin>>nodo[i];
        insertar(0);
    }
    for(i=0;i<N;i++)cout<<nodo[i]<<" ";
    cout<<"\n";
    for(i=0;i<N;i++)cout<<izq[i]<<" ";
    cout<<"\n";
    for(i=0;i<N;i++)cout<<der[i]<<" ";
    cin>>m;
    cout<<vuzkr(m);
    cout<<"Movimientos: "<<a;
}
void insertar(int c){
    if(nodo[i]<nodo[c]){
        if(izq[c]==0)izq[c]=i;
        else insertar(izq[c]);
    } else{
        if(der[c]==0)der[c]=i;
        else insertar(der[c]);
    }
}
int vuzkr(int c){
    a++;
    if(c==N-1)return -1;
    if(n==nodo[c]){
        return c;
    }
    if(n<nodo[c]){
        if(izq[c]==0)return -1;
        return vuzkr(izq[c]);
    } else{
        if(der[c]==0)return -1;
        return vuzkr(der[c]);
    }
}
