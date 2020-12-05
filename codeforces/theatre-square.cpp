#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<(n/a+(n%a!=0?1:0))*(m/a+(m%a!=0?1:0));
}
