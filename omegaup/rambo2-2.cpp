#include<iostream>
#include<set>
#define MAX 1000001
using namespace std;
int n, d, k, m, mc, mp, c, cm, fm;
int v[MAX], mod[MAX];
//int sum[MAX];
set< pair<int,int> >sum[MAX];
pair<int,int> cs;
int ci[MAX];
bool vb[MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>d>>k>>m;
    for(int i=0; i<k; i++) cin>>v[i];
    for(int i=0; i<k; i++) vb[v[i]]=1;
    /*for(int i=1; i<=k; i++){
        for(int j=1, p=v[i]; j<=m; j++, p+=d){
            if(p>=n) p%=n;
            c+= vb[p];
        }
        if(c>mc) mc=c, mp=v[i];
        c=0;
    }
    cout<<mc<<" "<<mp;*/
    for(int i=0; i<k; i++){
        cs={v[i],mod[ v[i]%d ]++};
        sum[v[i]%d].insert(cs);
    }
    for(auto i:sum[1]){
        //cout<<i.first<<" ";
    }
    cs={3,0};
    cout<<(*sum[2].lower_bound(cs)).first;
    for(int i=0; i<k; i++){
        cm=m;
        fm=1;
    }
}
/*
12 3 5 5
1 2 5 8 10
*/
