#include<iostream>
#define MAX 501
using namespace std;
int d, n, md, mu, p[MAX], u[MAX], dp[2][50001];
bool b;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>d>>n;
    for(int i=1; i<=n; i++) cin>>p[i]>>u[i];
    for(int i=1; i<=n; i++){
        dp[b][p[i]]=u[i];
        for(int j=0; j<=md; j++){
            if(!dp[!b][j])continue;
            dp[b][j]=max(dp[b][j], dp[!b][j]);
            dp[b][j+p[i]]=max(dp[!b][j+p[i]], dp[!b][j]+u[i]);
        }
        md=min(md+p[i],d);
        b=!b;
    }
    b=!b;
    for(int i=1; i<=d; i++) mu=max(mu,dp[b][i]);
    /*for(int i=1; i<=n; i++){
        for(int j=1; j<=d; j++) cout<<dp[i][j]<<" ";
        cout<<"\n";
    }*/
    cout<<mu;
}
/*
10 5
10 50
5 10
5 10
9 50
1 1
*/
