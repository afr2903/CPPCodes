#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    unsigned long long int n;
    cin>>n;
    if(n==1){
        cout<<"1 1 KW";
        return 0;
    }
    cout<<n-1<<" ";
    if(n%4==0)cout<<6;
    if(n%4==1)cout<<2;
    if(n%4==2)cout<<4;
    if(n%4==3)cout<<8;
    cout<<" TABLAS";
}
