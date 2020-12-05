#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n!=1)cout<<n<<"\n";
    for(int i=n/2;i>=2;i--) if(n%i==0)cout<<i<<"\n";
    cout<<1;
}
