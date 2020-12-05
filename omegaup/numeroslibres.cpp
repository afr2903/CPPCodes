#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long int ull;
int n;
ull mcd(ull a,ull b){
    if(b==0) return a;
    return mcd(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ull a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(mcd(a,b)==1)cout<<"SI\n";
        else cout<<"NO\n";
    }
}
