#include<iostream>
#define MAX 102
using namespace std;
typedef unsigned long long int ll;
int n;
ll m, dp[MAX][MAX];
int triangle[MAX][MAX];
void compute(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+triangle[i][j];


    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) for(int j=1; j<=i; j++) cin>>triangle[i][j];
    compute();
    for(int i=1; i<=n; i++) m=max(m,dp[n][i]);
    cout<<m;
}
