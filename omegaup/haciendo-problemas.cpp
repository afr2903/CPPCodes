#include<iostream>
using namespace std;
int n,f,d,m;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>f>>d;
    if(n%f==0){
        cout<<"YES\n";
        cout<<n/f<<" "<<0;
        return 0;
    }
    if(n%d==0){
        cout<<"YES\n";
        cout<<0<<" "<<n/d;
        return 0;
    }
    m=n%f;
    while(m<=n){
        m+=f;
        if(m%d==0)break;
    }
    if(m>n) cout<<"NO";
    else cout<<"YES\n"<<(n-m)/f<<" "<<m/d;
}
