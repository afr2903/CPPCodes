#include<iostream>
using namespace std;
int main(){
    int n,m,s;
    cin>>n>>m;
    bool b[n+2][m+2];
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>b[i][j];
    for(int i=0;i<=n+1;i++)b[i][0]=0,b[i][m+1]=0;
    for(int j=0;j<=m+1;j++)b[0][j]=0,b[n+1][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            s=b[i][j];
            s+=b[i-1][j];
            s+=b[i][j+1];
            s+=b[i+1][j];
            s+=b[i][j-1];
            s+=b[i-1][j-1];
            s+=b[i-1][j+1];
            s+=b[i+1][j+1];
            s+=b[i+1][j-1];
            cout<<s<<" ";
        }
        cout<<"\n";
    }
}
