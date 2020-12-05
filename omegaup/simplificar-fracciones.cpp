#include<iostream>
#include<algorithm>
using namespace std;
int n;
unsigned long long a, b, mcd;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        mcd=__gcd(a,b);
        cout<<a/mcd<<" "<<b/mcd<<"\n";
    }
}
