#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,x,y,c,o=0;
ll corner(ll k){
    return k*(k+1)/2;
}
bool day(ll m){
    ll u=max(o,m-(n-(y+1))),
    d=max(o,m-y),
    r=max(o,m-(n-(x+1))),
    l=max(o,m-x);
    ll zombies=m*m+(m+1)*(m+1);
    zombies=zombies-(u*u)-(r*r)-(d*d)-(l*l);
    ll nw=max(o,u-(x+1));
    ll ne=max(o,u-(n-x));
    ll sw=max(o,d-(x+1));
    ll se=max(o,d-(n-x));
    zombies+=corner(nw)+corner(ne)+corner(sw)+corner(se);
    if(zombies>=c)return 1;
    return 0;
}
int main(){
    cin>>n>>x>>y>>c;
    x--,y--;
    ll i=0,f=n+n+1;
    while(i<f){
        ll m=i+(f-i)/2;
        if(day(m))f=m;
        else i=m+1;
    }
    cout<<i;
}
