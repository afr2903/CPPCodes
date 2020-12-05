#include<iostream>
using namespace std;
int n;
int sum(int *p){
    return *p+*(p+1)+*(p+2);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int x[3];
    for(int i=0; i<n; i++){
        cin>>x[0]>>x[1]>>x[2];
        cout<<sum(x)<<"\n";
    }
}
