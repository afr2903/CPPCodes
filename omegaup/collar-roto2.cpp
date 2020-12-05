#include <iostream>
#define MAX 705
using namespace std;
string collar;
int dp[2][MAX][2];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, c;
    int ans=0;
    cin>>c;

    for(int q=1; q<=c; q++){
        cin>>n;
        cin>>collar;
        ans = 0;
        collar += collar;
        dp[0][0][0] = 0;
        dp[0][0][1] = 0;
        dp[1][n*2][0] = 0;
        dp[1][n*2][1] = 0;

        for(int i=0; i<n*2-1; i++){
            if(collar[i]=='r'){
                dp[0][i+1][0]= dp[0][i][0] + 1;
                dp[0][i+1][1]= 0;
            }
            if(collar[i]=='b'){
                dp[0][i+1][1]= dp[0][i][1] + 1;
                dp[0][i+1][0]= 0;
            }
            if(collar[i]=='w'){
                dp[0][i+1][0]= dp[0][i][0] + 1;
                dp[0][i+1][1]= dp[0][i][1] + 1;
            }
        }
        for(int i=n*2-1; i>=0; i--){
            if(collar[i]=='r'){
                dp[1][i][0]= dp[1][i+1][0] + 1;
                dp[1][i][1]= 0;
            }
            if(collar[i]=='b'){
                dp[1][i][1]= dp[1][i+1][1] + 1;
                dp[1][i][0]= 0;
            }
            if(collar[i]=='w'){
                dp[1][i][0]= dp[1][i+1][0] + 1;
                dp[1][i][1]= dp[1][i+1][1] + 1;
            }
        }
        for(int i=0; i<n*2; i++){
            ans= max(ans, max(dp[0][i][0], dp[0][i][1]) + max(dp[1][i][0], dp[1][i][1]));
        }
        cout<<min(ans, n)<<"\n";
    }
}
