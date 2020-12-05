#include<iostream>
using namespace std;
#define MAX 1001
#define MOD 10000
typedef unsigned long long ull;
int n, a, p, b, e;
int updates[2][MAX];

int gauss(ull x){
    ull sum = (x*(x+1))/2;
    sum %= MOD;
    return int(sum);
}
int query(int x){
    if(b > updates[1][x]) return 0;
    if(e < updates[0][x]) return 0;
    ull d = updates[1][x] - updates[0][x] + 1;
    ull in, fn;
    if(b <= updates[0][x]) in = 0;
    else in = b - updates[0][x];
    if(e >= updates[1][x]) fn = d;
    else fn = d - (updates[1][x] - e);

    return gauss(fn) - gauss(in);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>a>>p;
    for(int i=1; i<=a; i++) cin>>updates[0][i]>>updates[1][i];
    for(int i=1; i<=p; i++){
        cin>>b>>e;
        int ans = 0;
        for(int j=1; j<=a; j++){
            ans+= query(j);
            ans%= MOD;
            if(ans<0) ans+=MOD;
        }
        cout<<ans<<"\n";
    }
}
