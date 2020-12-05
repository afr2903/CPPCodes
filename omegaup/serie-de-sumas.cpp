#include<iostream>
#include<cmath>
#define MOD 10000000
using namespace std;
typedef unsigned long long ull;
ull sum;
int n;
ull binary(int x, int e){
    if(e==1) return x;
    if(e%2) return (binary(x,e-1)*x)%MOD;
    ull a= binary(x,e/2)%MOD;
    return (a*a)%MOD;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=binary(i,i);
        sum%=MOD;
    }
    cout<<sum;
}
