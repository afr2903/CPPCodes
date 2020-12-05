#include<iostream>
using namespace std;
int n;
long long exponenciar(int m){
    cout<<m<<"\n";
    if(m==1) return n;
    if(m%2!=0) return n*exponenciar(m-1);
    long long x=exponenciar(m/2);
    return x*x;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int m;
    cin>>n>>m;
    cout<<exponenciar(m);
}
