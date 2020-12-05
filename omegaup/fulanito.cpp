#include<iostream>
#include<set>
#define MAX 1000001
using namespace std;
typedef long long ll;

ll q, n, g, ma, mi;
ll x[MAX], sum[MAX];

void binary(){
    ll in=1, fn=n, hf;
    while(in<fn){
        hf= (in+fn)/2;
        if(sum[hf]>g) fn=hf;
        else in=hf+1;
    }
    if(sum[in]>g) in--;
    cout<<in<<" "<<g-sum[in]<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>q>>n;
    for(int i=1; i<=n; i++) cin>>x[i];
    for(int i=1; i<=n; i++) sum[i]= x[i]+sum[i-1];
    //for(int i=1; i<=n; i++) cout<<sum[i]<<" ";
    //cout<<"\n";
    for(int i=1; i<=q; i++){
        cin>>g;
        binary();
    }
}
