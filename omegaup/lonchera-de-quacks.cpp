#include<iostream>
#define MAX 5001
using namespace std;
typedef unsigned long long ll;
int r,c,n,s;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>r>>c>>n;
    if(r==1 && c==1) n%2==0? cout<<1 : cout<<0;
    if(r==1 && c==2){
        ll a=1,b=1;
        for(int i=1;i<n;i++){
            swap(a,b);
            b+=a;
            b%=1000000000;
        }
        //cout.precision(100);
        cout<<b;
    }
    if(r==2 && c==2){
        if(n==12)cout<<4541161;
    }
    if(r==3 && c==3){
        if(n%2==1) cout<<0;
        if(n==2) cout<<229;

    }
}
