#include<iostream>
#include<map>
#define MAX 1000005
using namespace std;
typedef long long int ll;

map<ll,ll> bl,br;
int lf[MAX], rg[MAX], a[MAX], bit[MAX];
int n;

void update(int i){
    for(; i<=n; i+=i&(-i)) bit[i]++;
}
int query(int i){
    int sum=0;
    for(; i>0; i-=i&(-i)) sum+= bit[i];
    return sum;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        lf[i]= ++bl[a[i]];
    }
    for(int i=n; i>0; i--)
        rg[i]= ++br[a[i]];

    ll ans=0;
    for(int i=n-1; i>0; i--){
        update(rg[i+1]+1);
        ans+= query(lf[i]);
    }
    cout<<ans;
}
