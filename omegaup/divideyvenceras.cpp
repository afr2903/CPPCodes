#include<iostream>
#include<string>
using namespace std;
bool C[21];
int p[100];
int bb(int,int,int);
int hanoi(int,char,char,char);
void chain(int,int);
void binarias(int);
void permutaciones(int);
int N;
int main(){
    cin>>N;
    for(int i=0;i<N;i++)p[i]=i+1;
    permutaciones(N);
}
int bb(int a,int b,int x){
    int v=0;
    while(a<b){
        v++;
        if((a+b)/2==x)return v;
        else if((a+b)/2<x) a=(a+b)/2+1;
        else b=(a+b)/2-1;
    }
    if(a==x)return v;
    else return -1;
}
int hanoi(int n,char a,char d,char u){
    if(n==1){
        cout<<"Mueve de "<<a<<" a "<<d<<"\n";
        return 0;
    }
    hanoi(n-1,a,u,d);
    cout<<"Mueve de "<<a<<" a "<<d<<"\n";
    hanoi(n-1,u,d,a);
}
void chain(int n,int c){
    char i;
    if(n==0){
        cout<<C<<"\n";
    }
    else{
        for(i='a';i<'a'+c;i++){
            C[n-1]=i;
            chain(n-1,c);
        }
    }
}
void binarias(int n){
    if(n==0){
        for(int i=0;i<N;i++)cout<<C[i];
        cout<<"\n";
    }
    else{
        C[n-1]=1;
        binarias(n-1);
        C[n-1]=0;
        binarias(n-1);
    }
}
void permutaciones(int n){
    int a;
    if(n==0){
        for(int i=0;i<N;i++)cout<<p[i];
        cout<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
        a=p[i];
        p[i]=p[n-1];
        p[n-1]=a;
        permutaciones(n-1);
        a=p[i];
        p[i]=p[n-1];
        p[n-1]=a;
    }
}
