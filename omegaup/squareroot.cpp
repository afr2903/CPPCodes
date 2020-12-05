#include<bits/stdc++.h>
using namespace std;
int main(){
    /*double n;
    int d;
    cin>>n>>d;
    n=sqrt(n);
    cout.precision(d+1);
    cout<<n;*/
    /*int x[10],m=0;
    bool b;
    for(int i=0;i<10;i++){
        cin>>x[i];
        x[i]=x[i]%42;
        b=0;
        for(int j=0;j<i;j++)if(x[i]==x[j])b=1;
        if(b==0)m++;
    }
    cout<<m;*/
    /*long long int a,b;
    cin>>a>>b;
    cout<<a+b<<"\n"<<a-b<<"\n"<<a*b<<"\n";
    float c=a;
    printf("%.6f",c/b);*/
    int n,d;
    cin>>n>>d;
    if(n/d!=0)cout<<n/d<<" ";
    if(n%d!=0)cout<<n%d<<"/"<<d;
}
