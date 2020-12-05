#include<iostream>
using namespace std;
typedef unsigned long int ull;
ull m[161];
ull f(int x){
    if(x<50)return 2;
    if(!m[x])m[x]=f(x-1)+(f(x-5)*2);
    return m[x];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x;
    cin>>x;
    cout<<f(x);
}
