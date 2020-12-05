#include<iostream>
using namespace std;
typedef unsigned long long int ull;
ull t,r,v,p;
ull semaforo(int d){
    d-=p;
    d+=t;
    if(d<=r)return r;
    ull s=r+v;
    if(d<s)return d;
    if(d%s<r)return d+r;
    return d;
}
int main(){
    int n,l,d;
    cin>>n>>l;
    for(int i=0;i<n;i++){
        cin>>d>>r>>v;
        t=semaforo(d);
        p=d;
    }
    t+=l-p;
    cout<<t;
}
