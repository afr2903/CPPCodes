#include<iostream>
using namespace std;
int t,g,l;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    for(; t>=1; t--){
        cin>>g>>l;
        if(l%g==0) cout<<g<<" "<<l<<"\n";
        else cout<<-1<<"\n";
    }
}
