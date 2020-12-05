#include<bits/stdc++.h>
using namespace std;
int p[100];
int bb(int,int,int);
int N;
int main(){
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++)p[i]=i;
    sort(p,&p[n]+1);
    //for(int i=1;i<=n;i++)cout<<p[i]<<" ";
    //cout<<ceil(log2(n))<<"\n";
    cout<<bb(1,n,x);
}
int bb(int a,int b,int x){
    int v=0;
    while(a<b){
        v++;
        if(p[(a+b)/2]==x)return v;
        else if(p[(a+b)/2]<x) a=(a+b)/2+1;
        else b=(a+b)/2-1;
    }
    if(p[a]==x)return v;
    else return -1;
}
