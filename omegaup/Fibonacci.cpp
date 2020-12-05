#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a=0,b=1;
    if(n>=1)cout<<"1"<<"\n";
    for(int i=1;i<n;i++){
        cout<<a+b<<"\n";
        swap(a,b);
        b+=a;
    }
}
