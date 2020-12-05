#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long double ans = 1;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) ans *= 2;
    cout.precision(50);
    cout<<ans-1;
}
