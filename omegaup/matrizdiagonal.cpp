#include<bits/stdc++.h>
using namespace std;
int x[101][101];
int main(){
    int n,c;
    cin>>n;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>x[i][j];
    c=x[1][1];
    for(int i=2,j=2;i<=n;i++,j++){
        if(x[i][j]!=c){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"SI";
}
