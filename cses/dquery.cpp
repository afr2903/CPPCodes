#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>
#define MAXN 30001
#define MAXQ 200001
using namespace std;
int n, m, block;
int a[MAXN], bucket[MAXN];
map<int,int>ans;
struct range{
    int l,r, j;
}q[MAXQ];
bool cmp(range u, range v){
    if(u.l/block != v.l/block){
        return u.l < v.l;
    }
    return u.r < v.r;
}

void mo(){
    int cl=1, cr=1, d=0;
    for(int i=0; i<m; i++){
        int l=q[i].l, r=q[i].r;
        while(cl<l){
            bucket[a[cl]]--;
            if(bucket[a[cl]]==0)d--;
            cl++;
        }
        while(cl>l){
            bucket[a[cl-1]]++;
            if(bucket[a[cl-1]]==1)d++;
            cl--;
        }

        while(cr<=r){
            bucket[a[cr]]++;
            if(bucket[a[cr]]==1)d++;
            cr++;
        }
        while(cr>(r+1)){
            bucket[a[cr-1]]--;
            if(bucket[a[cr-1]]==0)d--;
            cr--;
        }
        ans[q[i].j]=d;
        //cout<<d<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    block= sqrt(n);
    for(int i=1; i<=n; i++) cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++){
        cin>>q[i].l>>q[i].r;
        q[i].j=i;
    }
    sort(q, q+m, cmp);
    //for(int i=0; i<m; i++) cout<<q[i].l<<" "<<q[i].r<<" "<<q[i].j<<"\n";
    mo();
    for(int i=0; i<m; i++) cout<<ans[i]<<"\n";
}
