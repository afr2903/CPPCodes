#include<iostream>
#define MAX 1000005
using namespace std;
typedef long long int ll;
ll n, sum;
int n1;
bool x[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    sum = (n*n+n)/2;
    if(sum%2==1){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    sum/=2;
    int aux = n;
    while(sum){
        n1++;
        if(sum<aux) aux = sum;
        sum-= aux;
        x[aux--] = 1;
    }
    cout<<n1<<"\n";
    for(int i=1; i<=n; i++) if(x[i]) cout<<i<<" ";
    cout<<"\n"<<n-n1<<"\n";
    for(int i=1; i<=n; i++) if(!x[i]) cout<<i<<" ";

}
