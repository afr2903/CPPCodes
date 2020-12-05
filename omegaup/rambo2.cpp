#include<iostream>
#define MAX 1000001
using namespace std;
int n, d, k, m, mc, mp, c;
int v[MAX];
bool v2[MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>d>>k>>m;
    for(int i=1; i<=k; i++) cin>>v[i];
    for(int i=1; i<=k; i++) v2[v[i]]=1;
    for(int i=1; i<=k; i++){
        for(int j=1, p=v[i]; j<=m; j++, p+=d){
            if(p>=n) p%=n;
            c+= v2[p];
        }
        if(c>mc) mc=c, mp=v[i];
        c=0;
    }
    cout<<mc<<" "<<mp;
}
