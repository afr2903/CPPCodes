#include<iostream>
using namespace std;
int n,k,o;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    if(k>=n){
        cout<<-1;
        return 0;
    }
    o=n-k;
    for(int i=1;i<o;i++)cout<<i+1<<" ";
    cout<<1<<" ";
    for(o++;o<=n;o++)cout<<o<<" ";
}
