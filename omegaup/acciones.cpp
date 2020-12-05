#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 33
typedef long long int ll;
int n, p[MAX];
ll m=16000000000;
void repartir(int a1, int a2, ll d, int i){
    if(a1==0 && a2==0) m=min(m,abs(d));
    if(a1>0)repartir(a1-1, a2, d+p[i], i+1);
    if(a2>0)repartir(a1, a2-1, d-p[i], i+1);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>p[i];
    repartir(n/2,n/2,0,1);
    cout<<m;
}
