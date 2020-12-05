#include<iostream>
#define MAX 200004
#define INF 1000000001
using namespace std;
int n, val=INF;
int a[MAX];
struct{
    int mn, mx;
}st[MAX];
void build(int in, int fn, int pos){
    if(in==fn){
        st[pos]={a[in],a[in]};
        return;
    }
    int md=(in+fn)/2,
    lf=pos*2,
    rg=lf+1;
    build(in,md,lf);
    build(md+1,fn,rg);
    st[pos].mn=min(st[lf].mn, st[rg].mn);
    st[pos].mx=max(st[lf].mx, st[rg].mx);
    //cout<<in<<" "<<fn<<" "<<pos<<" "<<st[pos].mn<<" "<<st[pos].mx<<"\n";
    val=min(val, st[pos].mx-st[pos].mn);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    build(1,n,1);
    cout<<val;
}
