#include<iostream>
using namespace std;

#define MOD 1000000007
#define MAXN 105
#define MAXX 1000005
int n, c[MAXN], dp[MAXX];
int f(int x){
    if(x==0) return 1;
    if(dp[x]) return dp[x];
    long long sum = 0;
    for(int i=1; i<=n; i++){
        if(x<c[i]) continue;
        sum += f(x-c[i]);
        sum %= MOD;
    }
    return dp[x] = sum;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x;
    cin>>n>>x;
    for(int i=1; i<=n; i++) cin>>c[i];
    cout<<f(x);
}
