#include<iostream>
#define MAX 50001
using namespace std;
int n, k, q,  l, r, x;
struct node{
    int mn, mx;
}st[MAX*3];
int a[MAX];
void build(int cl, int cr, int id){
    if(cl==cr){
        st[id]={a[cl],a[cl]};
        return;
    }
    int md=(cr+cl)/2, il=id*2, ir=il+1;
    build(cl,md,il);
    build(md+1,cr,ir);
    st[id]={min(st[il].mn,st[ir].mn), max(st[il].mx,st[ir].mx)};
}
void range(int cl, int cr, int id){
    if(st[id].mn>x)return;
    if(st[id].mx<=x){
        q+=cr-cl+1;
        return;
    }
    int md=(cr+cl)/2;
    range(cl,md,id*2);
    range(md+1,cr,id*2+1);
}
void query(int cl, int cr, int id){
    //cout<<cl<<" "<<cr<<"\n";
    if(cl>r||cr<l) return;
    if(cl>=l&&cr<=r){
        range(cl,cr,id);
        return;
    }
    int md=(cr+cl)/2;
    query(cl,md,id*2);
    query(md+1,cr,id*2+1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    build(1,n,1);
    //for(int i=1; i<=n*2; i++) cout<<st[i].mn<<" "<<st[i].mx<<"\n";
    cin>>k;
    for(int i=1; i<=k; i++){
        cin>>l>>r>>x;
        query(1,n,1);
        cout<<(r-l+1)-q<<"\n";
        q=0;
    }
}
