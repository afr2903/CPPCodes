#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n[3];
    cin>>n[0]>>n[1]>>n[2];
    sort(&n[0],&n[3]);
    if(n[2]*n[2]==(n[0]*n[0])+(n[1]*n[1])) cout<<n[2]<<" "<<n[1]<<" "<<n[0];
    else cout<<"imposible";
}