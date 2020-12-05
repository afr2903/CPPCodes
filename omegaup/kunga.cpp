#include<iostream>
using namespace std;
int main(){
    long long n;
    while(true){
        cin>>n;
        if(n==0)break;
        n=(n*n+n)/2;
        cout<<n<<"\n";
    }
}
