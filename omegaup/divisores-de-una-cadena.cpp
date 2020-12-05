#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string w;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>w;
    int x=0,s,d=0;
    for(int i=0; i<w.size(); i++)
        x+= w[i]>'Z'? w[i]-'a'+'A' : w[i];
    s=sqrt(x);
    for(int i=1; i<=s; i++) if(x%i==0)d++;
    d*=2;
    if(s*s==x) d--;
    cout<<d;
}
