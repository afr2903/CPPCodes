#include<iostream>
using namespace std;
int d[]={1000,500,200,100,50,20,10,5,2,1};
int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<6;i++){
        if(n>=d[i]){
            x=n/d[i];
            cout<<x<<" billete(s) de "<<d[i]<<"\n";
            n-=x*d[i];
        }
        if(n==0)return 0;
    }
    for(int i=6;i<10;i++){
        if(n>=d[i]){
            x=n/d[i];
            cout<<x<<" moneda(s) de "<<d[i]<<"\n";
            n-=x*d[i];
        }
        if(n==0)return 0;
    }
}
