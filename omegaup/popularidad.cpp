#include<bits/stdc++.h>
using namespace std;
int a[1000001],x[1000001];
int main(){
    int n,t,m=0,b=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(a[t]==0)x[b++]=t;
        if(++a[t]>m)m=a[t];
        cin>>t;
        if(a[t]==0)x[b++]=t;
        if(++a[t]>m)m=a[t];
    }
    sort(&x[0],&x[b]);
    for(int i=0;i<b;i++){
        if(a[x[i]]==m)cout<<x[i]<<"\n";
    }

}
