#include<iostream>
using namespace std;
int main(){
    unsigned long long int a=1,b=3,n;
    cin>>n;
    for(int i=2;i<n;i++){
        a+=b;
        swap(a,b);
        a%=1000000007;
        b%=1000000007;
        //cout<<c<<"\n";
    }
    cout<<b;
}
