#include<iostream>
#define MAX 1000001
using namespace std;
typedef unsigned long long ull;
int n, k;
ull m;
int diamonds[MAX];
ull suff[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>diamonds[i];
    cin>>k;
    for(int i=1; i<=n; i++) suff[i] = suff[i-1]+diamonds[i];
    for(int i=k; i<=n; i++) m = max(m, suff[i]-suff[i-k] );
    cout<<m;

}
