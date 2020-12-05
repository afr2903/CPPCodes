#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100001
int n, s, a;
int g[5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>s;
        g[s]++;
    }
    a=min(g[3], g[1]);
    g[1]-=a, g[3]-=a;
    g[1]= g[1]-(g[2]%2==1? g[1]>=2? 2: g[1]==1? 1:0 :0);
    cout<<g[4] + a + g[3] + g[2]/2 + (g[2]%2==1? 1:0) + g[1]/4 + (g[1]%4==0? 0:1);;
}
