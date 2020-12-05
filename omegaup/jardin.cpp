#include<iostream>
using namespace std;
int n;
int main(){
    int q,i,k;
    char c;
    cin>>n;
    int p[n+1],d[n+1];
    for(int j=1;j<=n;j++){
        cin>>p[j]>>d[j];
    }
    cin>>q;
    for(int j=0;j<q;j++){
        cin>>c;
        if(c=='P'){
            cin>>i>>k;
            cout<<p[i]+(k*d[i])<<"\n";
        }
        if(c=='N'){
            cin>>i>>k;
            cout<<i;
        }
    }
}
