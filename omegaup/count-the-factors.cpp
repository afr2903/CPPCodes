#include<iostream>
#define MAX 1000001
using namespace std;
int prime[MAX], n, f, lf;
void sieve(){
    for(int i=2; i<MAX; i+=2) prime[i]=2;
    for(int i=3; i<=1000; i+=2){
        if(prime[i]!=0) continue;
        prime[i]=i;
        for(int j=i*i; j<MAX; j+=i) prime[j]=i;
    }
    for(int i=1001; i<MAX; i+=2){
        if(prime[i]!=0) continue;
        prime[i]=i;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    sieve();
    //for(int i=1; i<=50; i++) cout<<prime[i]<<" ";
    while(true){
        cin>>n;
        if(n==0)break;
        f=0, lf=1;
        cout<<n<<" : ";
        while(n>1){
            //cout<<prime[n]<<" ";
            if(lf==prime[n])f--;
            lf=prime[n];
            if(lf==0) n/=n;
            else n/=lf;
            f++;
        }
        cout<<f<<"\n";
    }
}
