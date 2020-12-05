#include<iostream>
using namespace std;
int n, x1=1, x2=1;
string w;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++,x1=1,x2=1){
        cin>>w;
        for(int j=0; j<w.size(); j++) x1*= w[j]-'A'+1;
        cin>>w;
        for(int j=0; j<w.size(); j++) x2*= w[j]-'A'+1;
        if( x1%47 == x2%47 ) cout<<"GO\n";
        else cout<<"STAY\n";
    }
}
