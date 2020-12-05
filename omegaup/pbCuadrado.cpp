#include<iostream>
using namespace std;
#define MAX 1001
int n;
int m[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin>>m[i][j];
    for(int j=1; j<=n; j++){
        for(int i=n; i>0; i--) cout<<m[i][j]<<" ";
        cout<<"\n";
    }
}
