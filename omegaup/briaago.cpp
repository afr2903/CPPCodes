#include<iostream>
#define MAX 1001
using namespace std;
typedef long long int ll;
int n, a[MAX];
ll dp[MAX][MAX];
bool vis[MAX][MAX];
void bfs(int in, int fn, bool turno){
    if(vis[in][fn]) return;
    vis[in][fn]=1;
    if(in==fn){
        if(turno) dp[in][fn]= a[in];
        else dp[in][fn]= 0;
        return;
    }
    bfs(in+1, fn, !turno);
    bfs(in, fn-1, !turno);
    if(turno) dp[in][fn]= max( dp[in+1][fn]+a[in] , dp[in][fn-1]+a[fn] );
    else dp[in][fn]= min( dp[in+1][fn] , dp[in][fn-1] );
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    bfs(1,n,1);
    cout<<dp[1][n];
}
