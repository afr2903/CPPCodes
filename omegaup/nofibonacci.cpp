#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a=0,b=1;
    for(;b<=n;){
        swap(a,b);
        b+=a;
        for(int j=a+1; j<b&&j<n; j++) cout<<j<<" ";
    }
}
