#include<bits/stdc++.h>
using namespace std;
int n,b,m=2000000000;
int o[21];
bool a[21];
bool p=0;
void gold(int i,int s){
    //cout<<i<<" "<<s<<"\n";
    if(s>=b){
        p=1;
        m=min(m,s-b);
        return;
    }
    if(i==n)return;
    a[i]=0;
    gold(i+1,s);
    a[i]=1;
    s+=o[i];
    gold(i+1,s);
}
int main(){
    cin>>n>>b;
    for(int i=0;i<n;i++)cin>>o[i];
    gold(0,0);
    if(!p)cout<<"0";
    else cout<<m;
}
