#include<iostream>
using namespace std;
#define MAX
int n, d[3], c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>c;
            d[j]+=c;
        }
    }
    if(d[0]==0 && d[1]==0 && d[2]==0) cout<<"YES";
    else cout<<"NO";
}
