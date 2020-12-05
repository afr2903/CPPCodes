#include<iostream>
#include<algorithm>
#define MAX 10005
using namespace std;
typedef long long ll;
ll n, q, aux;
ll a[MAX];
int binary( ll x ){
    int b=1, e=n, m;
    while(b<e){
        m = (b+e)/2;
        if( a[m]==x ) return m;
        if( a[m]<x ) b = m+1;
        else e = m;
    }
    if( a[b-1]==x ) return b-1;
    if( a[b]==x ) return b;
    return b+1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>a[i];
    sort(a+1, a+n+1);
    //for(int i=1; i<=n; i++) cout<<a[i]<<" ";
    for(int i=1; i<=q; i++){
        cin>>aux;
        cout<<binary(aux)-1<<" ";
    }
}
/*
4 4
100000000000000000 90000000000000000 8000000000000000 700000000000000
100000000000000000 90000000000000000 8000000000000000 700000000000000
*/
