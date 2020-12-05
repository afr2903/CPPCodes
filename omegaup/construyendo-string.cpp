#include<iostream>
#include<string>
using namespace std;
int n, m;
string s,s1,s2;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    cin>>s;
    for(m=n/2; m>1; m--){
        s1=s.substr(0,m), s2=s.substr(m,m);
        if(s1==s2)break;
    }
    cout<<m+(n-2*m)+1;
}
