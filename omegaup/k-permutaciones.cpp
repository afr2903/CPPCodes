#include<iostream>
#include<algorithm>
#include<math.h>
#define MAX 1000005
using namespace std;
typedef unsigned long long ull;
ull n;
double k;
ull arr[25];
bool vis[25];
double fact[25];
ull pos;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    fact[1]=1;
    for(ull i=2; i<=19; i++) fact[i] = fact[i-1]*i;
    if(n>20){
        for(int i=1; i<=n-20; i++) cout<<i<<" ";
        for(int i= n-19, j=1; i<=n; i++,j++) arr[j] = i;
        n = 20;
    } else {
        for(int i=1; i<=n; i++) arr[i] = i;
    }

    for(int i= n-1; i>=1; i--){
        pos = ceil( k/fact[i] );
        //cout<<pos<<" ";
        int j, id;
        for(j=1, id=0; id<pos; j++) if(!vis[j]) id++;
        vis[j-1] = true;
        cout<<arr[j-1]<<" ";
        k = k - (pos-1)*fact[i];
        //cout<<k<<"\n";
    }
    for(int i=1; i<=n; i++) if(!vis[i]) cout<<arr[i];
}
