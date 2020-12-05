#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int n,k;
char w[11];
multiset< string >s;
void perm(string p, int bitmask){
    if(p.size()==k){
        //cout<<p<<"\n";
        s.insert(p);
        return;
    }
    for(int i=0; i<n; i++){
        if( bitmask&(1<<i) ) continue;
        if( (1<<i)<bitmask ) continue;
        perm( p+w[i], bitmask+(1<<i));
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    cin>>w;
    //sort(w,w+n);
    //for(int i=0;i<n;i++)cout<<w[i];
    perm("",0);
    for(auto x:s){
        cout<<x<<"\n";
    }
}
