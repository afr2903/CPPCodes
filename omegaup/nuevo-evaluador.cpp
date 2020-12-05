#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 300002
typedef  long long int ull;
ull n, q;
ull a, version;
ull k[MAX],m;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        k[a]++;
        if(k[a]>m)m=k[a];
    }
    if(m >= n/2+1)cout<<m;
    else cout<<-1;
}
