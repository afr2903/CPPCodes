#include<iostream>
using namespace std;
int n, p, q, r;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>q;
        if(q-p >=2)r++;
    }
    cout<<r;
}
