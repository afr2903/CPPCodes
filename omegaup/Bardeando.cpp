#include <iostream>
using namespace std;
int main(){
    long long int p,n,x=0,a;
    cin>>p>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        x+=a;
    }
    x<p?cout<<p-x:cout<<"0";
}
