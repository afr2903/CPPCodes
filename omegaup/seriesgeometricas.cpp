#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char e=253;
int main(){
    ll a,b,c,n,r;
    ll t[3],d[3];
    for(int i=0;i<3;i++)cin>>t[i];
    d[0]=t[1]-t[0],d[1]=t[2]-t[1];
    d[2]=d[1]-d[0];
    a=d[2]/2;
    b=(d[0]-d[2])-a;
    c=t[0]-(d[0]-d[2]);
    cout<<" "<<d[0]<<" "<<d[1]<<"\n  "<<d[2]<<"\n\n";
    if(a!=1&&a!=-1)cout<<a;
    if(a==-1)cout<<"-";
    cout<<"n"<<e;
    if(b>0)cout<<"+";
    if(b!=0&&b!=1&&b!=-1)cout<<b<<"n";
    if(b==1)cout<<"n";
    if(b==-1)cout<<"-n";
    if(c>0)cout<<"+";
    if(c!=0)cout<<c;
    while(true){
        cout<<"\nn=";
        cin>>n;
        r=(a*n*n)+(b*n)+c;
        cout<<r;
    }
}
