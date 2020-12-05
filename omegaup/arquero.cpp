#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int r;
    cin>>r;
    if(r==1) cout<<1;
    else cout<<(r-2)*6+1;
}
