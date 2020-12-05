#include<iostream>
using namespace std;
int x[1000];
int main(){
    int q,n,k,a,b,c;
    cin>>n>>k;
    for(int i=0;i<k;i++)cin>>x[i];
    a=n/x[0];
    for(int i=1;i<k;i++){
        b=n/x[i];
        a=a+b;
        for(int j=0;j<i;j++){
            c=n/(x[j]*x[i]);
            a-=c;
        }
    }
    cout<<a<<"\n";
}
