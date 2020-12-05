#include<iostream>
using namespace std;
typedef unsigned long long int ull;
int MCD(ull a,ull b){
    if(b==0)return a;
    return MCD(b,a%b);
}
int mcm(ull a,ull b){
    return (a*b)/MCD(a,b);
}
int main(){
    ull a,b;
    cin>>a>>b;
    cout<<mcm(a,b);
}
