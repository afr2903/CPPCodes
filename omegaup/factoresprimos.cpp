#include<iostream>
#include<math.h>
using namespace std;
#define MAX 1000001
#define MAX2 78500

bool b[MAX];
int prime[MAX2];
int ene[MAX2];
int ka[MAX2];
unsigned long long int resultado=1;
void criba(){
    b[0]=1, b[1]=1;
    int f=0,i;
    for(i=2; i*i<MAX; i++){
        if(b[i])continue;
        prime[f++]=i;
        for(int j=i*i; j<MAX; j+=i)b[j]=1;
    }
    for(;i<MAX; i++){
        if(b[i])continue;
        prime[f++]=i;
    }
}
int main(){
    criba();
    int n,k;
    cin>>n>>k;
    for(int i=n; i>1; i--){
        for(int j=0,a=i; j<MAX2; j++){
            if(a%prime[j]==0){
                ene[j]++;
                a/=prime[j--];
            }
            if(a==1)break;
        }
    }
    for(int i=k; i>1; i--){
        for(int j=0,a=i; j<MAX2; j++){
            if(a%prime[j]==0){
                ka[j]++;
                a/=prime[j--];
            }
            if(a==1)break;
        }
    }
    for(int i=n-k; i>1; i--){
        for(int j=0,a=i; j<MAX2; j++){
            if(a%prime[j]==0){
                ka[j]++;
                a/=prime[j--];
            }
            if(a==1)break;
        }
    }
    for(int j=0; j<MAX2; j++)ene[j]-=ka[j];
    for(int j=0; j<MAX2; j++){
        if(!ene[j])continue;
        resultado*=pow(prime[j],ene[j]);
    }
    cout<<resultado;
}
