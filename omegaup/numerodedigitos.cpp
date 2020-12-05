#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,d,t;
    double s=0;
    cin>>n;
    for(d=100000000,t=9;d>0&&t>0;d/=10,t--){
        if(d>n)continue;
        a=n%d;
        s+=a*t;
        a=n/d;
        a--;
        a*=d;
        s+=a*t+t;
        break;
    }
    for(d/=10,t--;t>0;d/=10,t--)s+=d*9*t;
    cout.precision(100);
    cout<<s;
}
