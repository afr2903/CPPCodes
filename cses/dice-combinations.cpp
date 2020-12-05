#include<iostream>
using namespace std;

#define MAX 1000005
#define MOD 1000000007
int n, dp[MAX];
int f(int x){
    if(x<=1) return 1;
    if(dp[x]) return dp[x];
    long long sum = 0;
    for(int i=1; i<=6&&i<=x; i++){
        sum += dp[x-i] = f(x-i);
    }
    return dp[x] = sum%MOD;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    cout<<f(n);
}
