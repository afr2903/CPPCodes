#include<iostream>
using namespace std;
typedef long long ll;
int h, l;
ll n, s, lg;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>h>>l;
    for(int l2=l; l2>1; l2/=2, lg++);
    s= 1<<lg;
    s= s*2-1 + l*(h-lg);
    cout<<s;
}
