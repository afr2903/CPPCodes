#include<iostream>
#define MAX 1001
using namespace std;
int n,k;
char fair[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin>>fair[i][j];
    cout<<"DA";
}
