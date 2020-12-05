#include<iostream>
#include<cmath>
#define MAX 100001
using namespace std;
int a, b, factors, prime;
int divider[MAX];
void sieve(){
    int s= sqrt(b), i;
    divider[1]=1;
    for(i=2; i<=s; i++){
        if(divider[i]) continue;
        divider[i]=i;
        for(int j=i*i; j<=b; j+=i) if(!divider[j]) divider[j]=i;
    }
    for(; i<=b; i++) if(!divider[i]) divider[i]=i;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>a>>b;
    sieve();
    for(; a<=b; a++){
        if(divider[a]==a) continue;
        factors=1;
        for(int i=a; divider[i]!=i;)
            i/=divider[i], factors++;
        //cout<<factors<<"\n";
        if(divider[factors]==factors) prime++;
    }
    cout<<prime;
}
