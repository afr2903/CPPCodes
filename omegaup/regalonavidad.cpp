#include<iostream>
using namespace std;
int main(){
    int n,k,l,x=0;
    cin>>n>>k>>l;
    if(n==0)x=k;
    else{
        x=k/n;
        x*=n;
        x=k-x;
    }
    if(x>=l)cout<<"SI";
    else cout<<l-x;
}
