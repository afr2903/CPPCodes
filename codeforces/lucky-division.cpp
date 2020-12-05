#include<iostream>
using namespace std;
int n, i, lucky[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(i=0; i<=13; i++) if(n%lucky[i]==0)break;
    if(i==14) cout<<"NO";
    else cout<<"YES";
}
