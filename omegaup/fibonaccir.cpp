#include<bits/stdc++.h>
using namespace std;
int n;
int f(int i,int a,int b){
    if(i==n)return b;
    if(i==0)b=1;
    if(i==1)a=1;
    return f(i+1,b,a+b);
}
int main(){
    cin>>n;
    cout<<f(0,0,0);
}
