#include<iostream>
#define MOD 98765431
using namespace std;
typedef unsigned long long ll;
ll n;
ll fib(ll i){
    if(i<=2) return 1;
    ll m=i/2;
    ll fm=fib(m), fm1=fib(m+1);
    if(i%2==0) return (fm*fm1)%MOD + (fib(m-1)*fm)%MOD;
    else return (fm1*fm1)%MOD + (fm*fm)%MOD;
}
int main(){
    cin>>n;
    cout<<fib(n)%MOD;
}
