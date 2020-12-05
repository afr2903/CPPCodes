#include<bits/stdc++.h>
using namespace std;
int p[20];
void permutaciones(int);
int N;
int main(){
    cin>>N;
    for(int i=0;i<N;i++)p[i]=i+1;
    permutaciones(N);
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
