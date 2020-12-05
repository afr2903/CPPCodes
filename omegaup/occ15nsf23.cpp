#include<bits/stdc++.h>
using namespace std;
int h,w,m,n,b=-999999999,s;
int x[10000][10000];
void sumar(int y){
    s=0;
    for(int i=y;i<m+y;i++)for(int j=0;j<n;j++)s+=x[i][j];
    if(s>b)b=s;
    for(int a=0;a+n<w;a++){
        for(int i=y;i<m+y;i++)s+=x[i][a+n]-x[i][a];
        if(s>b)b=s;
    }
}
int main(){
    cin>>h>>w>>m>>n;
    for(int i=0;i<h;i++)for(int j=0;j<w;j++)cin>>x[i][j];
    for(int i=0;i<h;i++)sumar(i);
    cout<<b;
}
