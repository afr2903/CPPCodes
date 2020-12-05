#include<iostream>
using namespace std;

#define INF 1000000000
#define MAX 1000005
int n, s, dp[MAX];
int f(int x){
    if(x<0) return INF;
    if(x==0) return 0;
    if(dp[x]) return dp[x];
    int ans = INF, aux = x, a;
    while(aux){
        a = aux%10;
        if(a) ans = min(ans, f(x-a)+1 );
        aux /= 10;
    }

    return dp[x] = ans;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    cout<<f(n);
}
