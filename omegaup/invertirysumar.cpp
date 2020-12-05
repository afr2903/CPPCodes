#include<bits/stdc++.h>
using namespace std;
string n[2];
typedef long long int ll;
int v=0,s;
bool capicua(){
    for(ll i=0,f=s-1;f>i;i++,f--){
        if(n[0][i]!=n[0][f])return 0;
    }
    for(ll i=0;i<s;i++)cout<<n[0][i];
    cout<<" "<<v;
    return 1;
}
void sumar(){
    ll a,l=s,r=0;
    for(ll i=0,f=s-1;i<s;i++,f--,l--){
        a=n[0][i]+n[0][f]-96+r,r=0;
        if(a>9) a=a-10,r=1;
        n[1][l]=a+'0';
    }
    if(r==1)n[1][0]='1';
    for(ll i=1-r,j=0;i<=s;i++,j++)n[0][j]=n[1][i];
    s=s+r;

}
int main(){
    cin>>n[0];
    s=n[0].size();
    for(ll i=1;i<=1000;i++){
        if(s>2147483647){
            cout<<"-1";
            return 0;
        }
        if(capicua())return 0;
        v++;
        sumar();
    }
    cout<<"-1";
}
