#include<iostream>
using namespace std;
int main(){
    int n,k,c=0,a;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<k)c++;
    }
    cout<<c;
}
