#include<iostream>
#define MAX 2001
using namespace std;
struct st{
    int h,l;
}a;
int n, h, l, s=2;
int o=0, t=1;
int data[MAX];
st dp[2][MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>data[i];
    dp[o][1]={data[1],data[1]};
    for(int i=2; i<=n; i++){
        for(int j=1; j<=s; j++){
            if(data[i]<dp[o][j-1].l) a.l=data[i], a.h=dp[o][j-1].h;
            else if(data[i]>dp[o][j-1].h) a.h=data[i], a.l=dp[o][j-1].l;
            else{ dp[t][j]=dp[o][j]; break; }
            if(j==s){
                dp[t][j]=a, s++;
                break;
            }
            if(a.h-a.l < dp[o][j].h-dp[o][j].l) dp[t][j]=a;
            else dp[t][j]=dp[o][j];
        }
        ++o%=2, ++t%=2;
    }
    /*for(int i=0; i<2; i++){
        for(int j=1; j<=n; j++){
            cout<<dp[i][j].l<<","<<dp[i][j].h<<" ";
        }
        cout<<"\n";
    }*/
    cout<<s-1;
}
