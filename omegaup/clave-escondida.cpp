#include<iostream>
#include<string>
using namespace std;
string L;
int encode(){
    int n,a,s=1;
    char c;
    cin>>c>>n;
    cin>>L;
    for(int j=0; j<n; j++){
        a=0;
        for(int i=j; i<L.size(); i+=n){
            a=(a + (L[i]>'Z'? L[i]-'a'+1 : L[i]-'A'+1)) % 10;
        }
        s=(s*(a+1))%10;
        if(s==0)return 0;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int p= encode()+1;
    char o= encode()+'A';
    cout<<p<<"-"<<o;
}
