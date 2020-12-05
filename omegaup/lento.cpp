#include<iostream>
using namespace std;
long n,a,f,sum,odd;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(long i=1;i<=n;i++){
        cin>>a;
        if(a%2==1){
            odd++;
            if(f==0)f=a;
            else f=min(f,a);
        }
        sum+=a;
    }
    if(!odd) cout<<"0";
    else if(odd%2==1) cout<<sum;
    else cout<<sum-f;
}
