#include<bits/stdc++.h>
using namespace std;
int o,z=32;
void binary(unsigned int n){
    if(n<1)return;
    binary(n/2);
    if(n%2==1)z--,o++;
}
int main(){
    int n;
    cin>>n;
    unsigned int u=n;
    binary(u);
    cout<<n<<" tiene "<<o<<" uno(s) y "<<z<<" cero(s)";
}
