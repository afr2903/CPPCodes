#include<iostream>
using namespace std;
int t, a, b;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>a>>b;
        cout<< ( (a+b)%3==0 && 2*a>=b && 2*b>=a ? "YES\n" : "NO\n" );
    }
}
