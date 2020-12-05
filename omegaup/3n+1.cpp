#include<iostream>
#define MAX 1000001
using namespace std;
typedef long long ll;
int n[MAX];
int a, b;
ll m;
ll l(ll x){
    if(x<MAX) if(n[x]) return n[x];
    if(x>=MAX){
        if(x%2==0) return l(x/2)+1;
        return l(x*3+1)+1;
    }
    if(x%2==0) return n[x]=l(x/2)+1;
    return n[x]=l(x*3+1)+1;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    n[1]=1;
    cin>>a>>b;
    for(;a<=b; a++){
        m= max(l(a), m);
    }
    cout<<m;
}
