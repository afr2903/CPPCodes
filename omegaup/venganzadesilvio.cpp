#include<iostream>
using namespace std;
typedef unsigned long long int ll;
int n,m;
char b;
ll x=1;
int main(){
    ios_base::sync_with_stdio(0); cin.tie();
    cin>>n>>m;
    b=cin.get();
    while(true){
        b=cin.get();
        if(b=='\n')break;
        x=(x*x)%m;
        if(b=='1')x=(x*n)%m;
    }
    cout<<x;
}
