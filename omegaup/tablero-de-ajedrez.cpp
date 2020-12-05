#include<iostream>
using namespace std;
int y,a;
char x;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>x>>y;
    a=y%2+x%2;
    if(a%2==0)cout<<"NEGRO";
    else cout<<"BLANCO";
}
