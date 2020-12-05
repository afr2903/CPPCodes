#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int matriz[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>matriz[i][j];
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--)cout<<matriz[j][i]<<" ";
        cout<<"\n";
    }
}
