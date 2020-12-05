#include<iostream>
#define MAX 100001
using namespace std;
int n, k, a[MAX], dp[MAX], sum, sum2;
bool t[MAX];
int main(){
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++){
        cin>>t[i];
        if(t[i]) sum+=a[i];
        else dp[i]=a[i];
    }
    for(int i=1; i<=n; i++) dp[i]+=dp[i-1];
    for(int i=k; i<=n; i++) sum2=max(sum2, dp[i]-dp[i-k]);
    cout<<sum+sum2;
}
