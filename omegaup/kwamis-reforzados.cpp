#include<iostream>
#include<math.h>
using namespace std;
typedef unsigned long long int ll;
ll MAX = 10000000000;
ll mod = 1000000007;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll ans=0;
    for(ll i=1; i<MAX; i++){
        ans+= (i%mod)*(i%mod);
        ans= (ans%mod);
        cout<<i<<" "<<ans<<"\n";
        ans+= (i%mod)*(i%mod);
        ans= (ans%mod);
    }
    ans+= (MAX%mod)*(MAX%mod);
    ans= (ans%mod);
    cout<<ans;
}
