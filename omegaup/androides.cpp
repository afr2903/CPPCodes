#include<iostream>
#define MAX 100001
#define INF 10000000
using namespace std;
int st[2*MAX], a[MAX], lazy[2*MAX],n, m;
void build(int in, int fn, int node){
    if(in==fn){
        st[node]=a[in];
        return;
    }
    int mid=(in+fn)/2;
    int left=node*2;
    int right=node*2+1;
    build(in, mid, left);
    build(mid+1, fn, right);
    st[node]=min(st[left], st[right]);
}
int query(int in, int fn, int node, int a, int b){
    if(in>b || fn<a) return 0;
    if(a<=in && fn<=b) return st[node];
    int mid=(in+fn)/2;
    int left=node*2;
    int right=node*2+1;
    return query(in,mid,left,a,b) + query(mid+1,fn,right,a,b);
}
void add(int in, int fn, int node, int a, int b){
    if(in>b || fn<a) return;
    if(a<=in && fn<=b){
        ++lazy[node]%=2;
        return;
    }
    int mid=(in+fn)/2;
    int left=node*2;
    int right=node*2+1;
    add(in,mid,left,a,b);
    add(mid+1,fn,right,a,b);
}
void update(int in, int fn, int node, int a, int b){
    //cout<<in<<" "<<fn<<"\n";
    if(in>b || fn<a) return;
    int mid=(in+fn)/2;
    int left=node*2;
    int right=node*2+1;
    if(lazy[node]!=0)++st[node]%=2;
    if(in==fn)return;
    if(lazy[node]!=0){
        ++lazy[left]%=2;
        ++lazy[right]%=2;
    }
    update(in,mid,left,a,b);
    update(mid+1,fn,right,a,b);
    st[node]=st[left]+st[right];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    int k, a, b;
    for(int i=1; i<=m; i++){
        cin>>k>>a>>b;
        if(k){
            cout<<query(1,n,1,a,b)<<"\n";
        }
        else{
            add(1,n,1,a,b);
            update(1,n,1,a,b);
        }
    }
    /*for(int i=1; i<=n*2; i++) cout<<st[i]<<" ";
    cout<<"\n";
    for(int i=1; i<=n*2; i++) cout<<lazy[i]<<" ";*/
}
/*
4 1
0 3 4
*/
