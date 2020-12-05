#include<iostream>
#include<algorithm>
#define MAX 2001
using namespace std;
int n,m, a,b, c;
int root[MAX];
int conjunct[MAX];
int unir(int x){
    if(root[x]==x) return x;
    return root[x]=unir(root[x]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++) root[i]=i;
    for(int i=1; i<=m; i++){
        cin>>a>>b;
        root[unir(a)]=unir(b);
    }
    for(int i=1; i<=n; i++) unir(i);
    sort(root+1,root+n+1);
    a=1, b=1;
    for(int i=2; i<=n; i++){
        if(root[i]!=root[i-1]) conjunct[b]=conjunct[b-1]+a, a=1, b++;
        else a++;
    }
    conjunct[b]=conjunct[b-1]+a;
    for(int i=1; i<=b; i++) c+=(conjunct[i]-conjunct[i-1])*(conjunct[b]-conjunct[i]);
    cout<<c;
}
