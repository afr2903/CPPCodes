#include<iostream>
using namespace std;
int main(){
    int r,s,b;
    cin>>r>>s>>b;
    if(b>r*s)cout<<r*s<<" "<<b-r*s;
    else cout<<b<<" 0";
}
