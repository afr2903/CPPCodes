#include<iostream>
using namespace std;
int n, m, a, b, c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        c=c-a+b;
        m=max(m,c);
    }
    cout<<m;
}

