#include<iostream>
#include<algorithm>
using namespace std;
unsigned long long n, t, s, ai,bi, ax,bx, mcdi,mcd;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>t;
    for(int i=1; i<=n; i++){
        cin>>ai>>bi;
        mcdi= __gcd(ai,bi);
        ax= ai-mcdi, bx= bi-mcdi;
        while(ax&&bx){
            mcd= __gcd(ax,bx);
            mcd= __gcd(mcd,mcdi);
            ax-=mcd, bx-=mcd;
        }
        s+= !ax!=!bx? 2 : 1;
    }
    if(s<=t) cout<<s-1;
    else cout<<"El Agente A no sera heroe nacional, el Doctor B destruira su pais";
}
