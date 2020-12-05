#include<iostream>
#define MAX 100001
#define INF 10000000
using namespace std;
int st[2*MAX], a[MAX], n;
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
    if(in>b || fn<a) return INF;
    if(a<=in && fn<=b) return st[node];
    int mid=(in+fn)/2;
    int left=node*2;
    int right=node*2+1;
    return min(query(in,mid,left,a,b) , query(mid,fn,right,a,b));
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    build(1,n,1);
    for(int i=1; i<=n*2; i++) cout<<st[i]<<" ";
}
/*
8
1 8 7 1 14 8 3 4
*/
