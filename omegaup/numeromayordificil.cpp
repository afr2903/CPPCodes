#include <iostream>
using namespace std;
int main(){
    int n,m=-999999;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        m=max(m,x[i]);
    }
    cout<<m;
}

