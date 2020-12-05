#include<bits/stdc++.h>
using namespace std;/*
int main(){
    int n,k,v=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    for(int i=0;i<n;i++)if(a[i]==k)v++;
    cout<<v;
}*/
/*int main(){
    int n,q,i;
    cin>>n;
    int l[n];
    for(i=0;i<n;i++)cin>>l[i];
    cin>>q;
    int p[q],x[q];
    for(i=0;i<q;i++){
        cin>>p[i];
        x[i]=0;
    }
    for(i=0;i<n;i++){
        for(int j=0;j<q;j++){
            if(l[i]==p[j])x[j]++;
        }
    }
    for(i=0;i<q;i++)cout<<x[i]<<"\n";
}*/
/*int main(){
    int n,b=0,s=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]>x[b])b=i;
        if(x[i]<x[s])s=i;
    }
    swap(x[0],x[b]);
    if(b!=n-1)swap(x[n-1],x[s]);
    for(int i=0;i<n;i++)cout<<x[i]<<"\n";
}*/
int main(){
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    sort(&x[0],&x[n]);
    for(int i=n-1;i>=0;i--)cout<<x[i]<<" ";
}
