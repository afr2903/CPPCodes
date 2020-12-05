#include<iostream>
using namespace std;
int main(){
    long long int n, aux;
    cin>>n;
    long long int ans = (n*n+n)/2;
    for(int i=1; i<n; i++){
        cin>>aux;
        ans -= aux;
    }
    cout<<ans;
}

