#include<iostream>
#include<string>
using namespace std;
string s, c;
int n, t, l;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>t;
    cin>>s;
    c=s;
    for(int j=0; j<t; j++){
        for(int i=n-1; i>0; i--) if(s[i]=='G')swap(c[i],c[i-1]);
        s=c;
    }
    cout<<s;
}
