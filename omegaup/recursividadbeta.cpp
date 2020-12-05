#include<iostream>
using namespace std;
typedef long long int ll;

ll f(ll n){
    if(n<=15){
        ll x=n*4;
        cout<<x<<"\n";
        return x;
    }
    ll x=f(n-10)*5;
    cout<<x<<"\n";
    return x;
}
int main(){
    ll n;
    cin>>n;
    f(n);
}
