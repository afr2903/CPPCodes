#include<bits/stdc++.h>
using namespace std;
int main(){
    int o=0,t=0,n=0;
    for(int i=0;i<64;i++){
        cin>>n;
        if(n==1)o++;
        if(n==2)t++;
    }
    if(o>t)cout<<"GANE";
    if(o<t)cout<<"PERDI";
    if(o==t) cout<<"EMPATE";
}

