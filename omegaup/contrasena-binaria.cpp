#include<iostream>
#include<math.h>
using namespace std;
typedef unsigned long long int ull;
ull n,s=0,sum;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    ull m=1;
    while(true){
        if(m>n)break;
        m*=2, s++;
    }
    ull i=1,a=1,b=2,r=0;
    for(; i<s; i++,r+=a,a=b,b*=2){
        sum+=((n/2-r)/b)*a;
        sum+=min((n/2-r)%b,a);
    }
    cout<<sum;
}
