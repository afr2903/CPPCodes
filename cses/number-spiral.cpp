#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int t;
ll y, x, ans, cy, cx;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>y>>x;
        ans = max(y,x);
        if( ans%2==0 ) cy = ans, cx = 1;
        else cy = 1, cx = ans;
        ans = ans*ans - abs(cy-y) - abs(cx-x);
        cout<<ans<<"\n";
    }
}
