#include<bits/stdc++.h>
using namespace std;
int g,p,n;
int a[21][2];
void x(int i,bool b,int w,int c){
    if(i>n)return;
    if(b){
        w+=a[i][1];
        c+=a[i][0];
    }
    if(w>p)return;
    x(i+1,1,w,c);
    x(i+1,0,w,c);
    g=max(g,c);
}
int main(){
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    x(1,1,0,0);
    x(1,0,0,0);
    cout<<g;
}
/*
3 6
5 5
2 3
4 3
*/
