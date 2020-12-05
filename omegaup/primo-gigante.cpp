#include<iostream>
#define MAX 9990000000
using namespace std;
typedef long long ll;
bool prime;
bool check(ll x){
    int digits[10];
    for(int j=0; j<10; j++) digits[j]=0;
    while(x){
        if(digits[x%10]==2) return 0;
        digits[x%10]++;
        x/=10;
    }
    return 1;
}
int main(){
    for(ll i=MAX; i>1; i--){
        cout<<i<<"\n";
        if(!check(i)) continue;
        prime=1;
        for(ll j=2; j<i; j++){
            //cout<<j<<" ";
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime){
            cout<<"\n"<<i<<"\n\n";
            return 0;
        }
    }
}
