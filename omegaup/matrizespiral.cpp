#include<bits/stdc++.h>
using namespace std;
int x[102][102];
void espiral(int m, int n, int t){
    int i,a=1,h=1,l=1;
    while(a>!t){
        for(i=l,h=l;i<=n;i++,a++)x[h][i]=a;
        if(a>t)return;
        for(i=n,h++;h<=m;h++,a++)x[h][i]=a;
        if(a>t)return;
        for(i=n-1,h=m;i>=l;i--,a++)x[h][i]=a;
        if(a>t)return;
        for(i=l,h--;h>l;h--,a++)x[h][i]=a;
        if(a>t)return;
        m--,n--,l++;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    espiral(m,n,m*n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)cout<<x[i][j]<<" ";
        cout<<"\n";
    }
}

