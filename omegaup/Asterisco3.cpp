#include <iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    for(int i=0;i<n;i++){
        r=n-i-1;
        for(int j=0;j<r;j++)cout<<" ";
        for(int j=0;j<2*n-(2*r)-1;j++)cout<<"*";
        for(int j=0;j<r;j++)cout<<" ";
        cout<<"\n";
    }
}
