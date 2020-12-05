#include<bits/stdc++.h>
using namespace std;
int x[50][50];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>x[i][j];
    for(int j=1;j<=m;j++){
        for(int i=1;i<=n;i++)cout<<x[i][j]<<" ";
        cout<<"\n";
    }
}
