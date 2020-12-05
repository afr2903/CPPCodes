#include<iostream>
using namespace std;
#define MAX 500005
int n, ans;
int board[3][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>board[1][i];
    for(int i=1; i<=n; i++) cin>>board[2][i];

    for(int i=1; i<=n; i++) if( board[1][i]==board[1][i+1]==board[2][i]==board[2][i+1] ) ans++, i++;
    cout<<ans;
}
