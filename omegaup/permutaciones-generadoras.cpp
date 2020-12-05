#include<iostream>
#define MOD 997
#define MAX 1001
using namespace std;
int n, root, ml, ls, rs;
int r[MAX], l[MAX], level[MAX];
int buscar(int node){
    int q=0;
    if(l[node]>0) q+=buscar(l[node])+1;
    if(r[node]>0) q+=buscar(r[node])+1;
    return q;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>root;
    for(int i=1; i<=n; i++) cin>>l[i]>>r[i];
    ls=buscar(l[root])+1;
    rs=buscar(r[root])+1;
    if(ls>rs) swap(ls, rs);
    unsigned long long int ans=1;
    for(int i=n-1; i>=rs; i--) ans*= i;
    for(int i=2; i<=ls; i++) ans/= i;
    cout<<ans%MOD;
}
/*
7 2
-1 -1
1 5
-1 4
-1 -1
3 6
-1 7
-1 -1
*/
