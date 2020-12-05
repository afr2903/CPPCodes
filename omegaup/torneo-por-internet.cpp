#include<iostream>
#include<algorithm>
using namespace std;
float n, maxn, d;
string m;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>d>>m;
        d= abs(int(d));
        if(m=="in") d*= 2.54/100;
        if(m=="cm") d/= 100;
        if(m=="km") d*= 1000;
        if(m=="yd") d*= 36*2.54/100;
        maxn= max(maxn,d);
    }
    cout<<maxn;
}
