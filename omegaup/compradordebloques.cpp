#include<iostream>
using namespace std;
typedef unsigned long long int ull;
int n,h,b,i,a;
ull x=0;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>h>>b;
    for(i=1;i<=n;i++){
        cin>>a;
        if(a<h)x+=i*(h-a);
    }
    if(b>n){
        a=(b*b+b)/2;
        a-=(n*n+n)/2;
        x+=a*h;
    }
    cout<<x;
}
