#include<iostream>
using namespace std;
int f(int n){
    if(n==1)return 0;
    if(n%2==0)return f(n/2)+1;
    return f(3*n+1)+1;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}
