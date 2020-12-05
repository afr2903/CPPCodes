#include<bits/stdc++.h>
using namespace std;
int p[100001];
int buscar(int k,int f){
    int i=1,m;
    while(i<f){
        m=i+(f-i)/2;
        if(p[m]==k)return m;
        if(p[m]>k)f=m-1;
        else i=m+1;
    }
    if(p[i]==k)return i;
    return 0;
}
int main(){
    int m,n,a;
    cin>>m;
    for(int i=1;i<=m;i++)cin>>p[i];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        cout<<buscar(a,m)<<" ";
    }
}
