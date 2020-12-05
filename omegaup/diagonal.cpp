#include<iostream>
#include<math.h>
#define MAX 1000001
using namespace std;
long long int n, d, t=1;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(true){
        cin>>n;
        if(n==0)break;
        d=(sqrt((n*8)+9)+3)/2;
        if((d*(d-3))/2==n) cout<<"Case "<<t<<": "<<d<<"\n";
        else cout<<"Case "<<t<<": "<<d+1<<"\n";
        t++;
    }
}
