#include<iostream>
#include<algorithm>
#define MOD 1000000007
#define MAX 1000001
using namespace std;
typedef unsigned long long ll;
ll n, mcm=1, ans=1;
int prime[MAX], fact[MAX], s=1, f=1;
bool p[MAX];
ll gcd(ll a, ll b){
    if(a==0) return b;
    return gcd(b%a, a);
}
void criba(){
    int i;
    for(i=2; i*i<=n; i++){
        if(p[i])continue;
        mcm=(mcm*i)%MOD;
        prime[s++]=i;
        for(int j=i*i; j<=n; j+=i)p[j]=1;
    }
    for(; i<=n; i++){
        if(p[i])continue;
        prime[s++]=i;
        mcm=(mcm*i)%MOD;
    }
}
int main(){
    cin>>n;
    criba();
    for(int i=2; i<=n; i++){
        if(!p[i]) continue;
        mcm=mcm*i/(gcd(mcm,i));
        //mcm%=MOD;
        //cout<<mcm<<"\n";
    }
    while(mcm>1){
        for(int j=1; j<s; j++){
            if(mcm%prime[j]!=0) continue;
            fact[f++]=prime[j];
            mcm/=prime[j];
            break;
        }
    }
    for(int i=1; i<f; i++){
        if(p[fact[i]]) ans= (ans*fact[i])%MOD;
        else p[fact[i]]=1;
    }
    cout<<ans;
}
