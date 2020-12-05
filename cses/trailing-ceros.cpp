#include<iostream>
using namespace std;
int n;
int zeros(int x){
    if(!x) return 0;
    return x/5 + zeros(x/5);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    cout<<zeros(n);
}
