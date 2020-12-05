#include<iostream>
#define MAX 130001
using namespace std;
typedef long long ll;

int n, m, max_mcd=-1, max_mcm, cm;
int l[MAX];
struct {
    ll x;
    ll y;
}par[MAX];

int mcd(int a,int b){
    if(b==0)return a;
    return mcd(b,a%b);
}
int mcm(int a,int b){
    return a*b/m;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>l[i];

    for(int i=1; i<=n; i++){ //Busca el MAX MCD
        for(int j=i+1; j<=n; j++){
            m= mcd(l[i],l[j]);
            if(m==max_mcd) max_mcm= max(max_mcm, mcm(l[i],l[j]));
            else if(m>max_mcd){
                max_mcd= m;
                max_mcm= mcm(l[i],l[j]);
            }
        }
    }
    cout<<max_mcm;
}
/*
3 4 16
1 48
*/
