#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,s,d=1;
    cin>>n;
    s=sqrt(n);
    for(int i=2;i<=s;i++) if(n%i==0)d++;
    d*=2;
    if(s*s==n)d--;
    cout<<d;
}
