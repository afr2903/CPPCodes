#include<bits/stdc++.h>
using namespace std;
int x[101][101];
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>x[i][j];
    for(int i=1;i<=m;i++){
        for(int j=n;j>0;j--)cout<<x[i][j]<<" ";
        cout<<"\n";
    }
}

