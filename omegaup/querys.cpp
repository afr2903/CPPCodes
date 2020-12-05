#include<iostream>
using namespace std;
int x[1000001];
int main(){
    int n,q,i,p;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p;
        x[p]++;
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>p;
        cout<<x[p]<<"\n";
    }
}
