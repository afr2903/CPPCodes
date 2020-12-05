#include<iostream>
using namespace std;

#define MAXN 105
#define MAXX 1000005
int n, c[MAXN], dp[MAXX];
int f(int x){
    if(x<0) return MAXX;
    if(x==0) return 0;
    if(dp[x]) return dp[x];
    int ans = MAXX;
    for(int i=1; i<=n; i++){
        ans = min(ans, f(x-c[i])+1 );
    }
    return dp[x] = ans;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x;
    cin>>n>>x;
    for(int i=1; i<=n; i++) cin>>c[i];
    int ans = f(x);
    if(ans == MAXX) cout<<"-1";
    else cout<<ans;
}
