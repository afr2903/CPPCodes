#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long int ll;
int prime[10000];
bool seen[10001];
int fact[20];
int n,p,s;
double ans=1;

void sieve(int n){
    int i;
    for(i=2; i*i<=n; i++){
        if(seen[i])continue;
        prime[p++]=i;
        for(int j=i*i; j<=n; j+=i)seen[j]=1;
    }
    for(; i<=n; i++) if(!seen[i])prime[p++]=i;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    sieve(n);
    for(int x=n,i=0; x>1;){
        if(x%prime[i]==0){
            x/=prime[i];
            fact[s++]=prime[i]-1;
        } else i++;
    }
    s--;
    for(int i=0; s>=0; s--,i++){
       ans*=pow(prime[i],fact[s]);
    }
    cout.precision(3000);
    cout<<ans;
}
