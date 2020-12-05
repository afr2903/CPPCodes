#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<540||n>1520)cout<<"error";
    else if(n<=580)cout<<"adelante "<<580-n;
    else if(n<780)cout<<"atras "<<n-580;
    else if(n<=980)cout<<"adelante "<<980-n;
    else if(n<1085)cout<<"atras "<<n-980;
    else if(n<=1190)cout<<"adelante "<<1190-n;
    else if(n<1220)cout<<"atras "<<n-1190;
    else if(n<=1250)cout<<"adelante "<<1250-n;
    else if(n<1335)cout<<"atras "<<n-1250;
    else if(n<=1420)cout<<"adelante "<<1420-n;
    else cout<<"error";
}
