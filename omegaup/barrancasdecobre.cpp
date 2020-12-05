#include<iostream>
using namespace std;
int n,k,i,s,m=-999999999;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    int e[n];
    for(i=1; i<=n; i++)cin>>e[i];
    for(i=1; i<=n-k+1; i++){
        s= e[i+k-1]-e[i];
        m=max(m,s);
    }
    cout<<m;
}
