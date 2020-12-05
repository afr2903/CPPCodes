#include<iostream>
using namespace std;
bool prime[1000001];
void criba(int n){
    for(int i=2; i*i<=n; i++){
        if(prime[i])continue;
        for(int j=i*i; j<=n; j+=i)prime[j]=1;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        m=max(x[i],m);
    }
    criba(m);
    for(int i=0;i<n;i++){
        if(prime[x[i]])cout<<"NO\n";
        else cout<<"SI\n";
    }
}
