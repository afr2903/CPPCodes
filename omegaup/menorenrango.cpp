#include<iostream>
using namespace std;
int main(){
    int n,a,b,m;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    cin>>a>>b;
    m=a,a++;
    for(a;a<=b;a++){
        if(x[a]<x[m])m=a;
    }
    cout<<m;
}
