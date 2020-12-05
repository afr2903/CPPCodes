#include<iostream>
using namespace std;
typedef unsigned long long int ull;
ull d[50000],a[50001];
bool u[50001];
ull c,n;

void x(ull i,ull f,ull v){
    if(i==f){
        d[c++]=v;
        return;
    }
    u[i]=1;
    x(a[i],f,v+1);
}
ull mcd(ull a,ull b){
    if(b==0)return a;
    return mcd(b,a%b);
}
ull mcm(ull a,ull b){
    return (a*b)/mcd(a,b);
}
int main(){
    ull y=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==i)u[i]=1;
    }
    for(int i=1;i<=n;i++){
        if(u[i])continue;
        x(a[i],i,1);
    }
    if(c==0){
        cout<<"1";
        return 0;
    }
    if(c==1){
        cout<<n;
        return 0;
    }
    y=mcm(d[0],d[1]);
    for(ull i=2;i<c-1;i++){
        y=mcm(y,d[i]);
    }
    cout<<y;
}
