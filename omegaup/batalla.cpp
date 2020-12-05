#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 51
int io[MAX], lira[MAX], n, force;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>io[i];
    for(int i=1; i<=n; i++) cin>>lira[i];
    sort(io+1, io+n+1);
    sort(lira+1, lira+n+1);
    for(int i=n; n>0; n--) if(io[i]>lira[n]) force+=io[i--];
    cout<<force;
}
