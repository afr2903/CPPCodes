#include<iostream>
using namespace std;
long long n, m, k, x, y, ans=1, p;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k>>x>>y;
    if(x>y){
        swap(x,y);
        swap(n,m);
    }
    p= (m-1)*x+y;
    ans+= (k/p)*m;
    k-= (k/p)*p;
    if(k) ans+= min(k/x, m-1);
    cout<<min(ans, n*m);
}
