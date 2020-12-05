#include<iostream>
using namespace std;
typedef long long int ll;
int mr=0, lim=40;
int resistencia(ll x){
    ll aux= x;
    int r=0;
    while(x>=10){
        //cout<<x<<" ";
        aux=x;
        x=1;
        while(aux){
            x*=aux%10;
            aux/=10;
        }
        r++;
    }
    return r;
}
void buscar(int rep[], int n, int dig){
    if(n==10){
        ll x=1;
        for(int i=2; i<=9; i++) for(int j=1; j<=rep[i]; j++) x*=i;
        int cr= resistencia(x)+1;
        if(cr>=mr){
            mr=cr;
            for(int i=2; i<=9; i++) for(int j=1; j<=rep[i]; j++) cout<<i;
            cout<<" "<<mr<<"\n";
        }
        return;
    }
    rep[n]=0;
    buscar(rep, n+1, dig);
    for(int i=1; i<=min(20,lim-dig); i++){
        rep[n]=i;
        buscar(rep, n+1, dig+i);
    }
}
int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int rep[]={0,0,0,0,0,0,0,0,0,0};
    buscar(rep, 2, 0);
}
