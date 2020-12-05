#include<iostream>
#define MAX 1001
using namespace std;
int n, p[MAX], m;
int dp[MAX][MAX];
void bfs(int x, int y, int t){
    if(dp[x][y]) return;
    if(x==y){
        dp[x][y]= p[x]*t;
        return;
    }
    bfs(x+1, y, t+1);
    bfs(x, y-1, t+1);
    dp[x][y]= max( dp[x+1][y]+(p[x]*t) ,dp[x][y-1]+(p[y]*t) );
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>p[i];
    bfs(1,n,1);
    cout<<dp[1][n];
}
