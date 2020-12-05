#include<iostream>
#define MOD 1000000007
using namespace std;
typedef long long ll;
int n;
ll ans = 1;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        ans*=2;
        ans%=MOD;
    }
    cout<<ans;
}
