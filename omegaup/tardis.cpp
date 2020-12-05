#include<iostream>
#define MAX 100001
#define INF 1000000001
using namespace std;
int n, q;
int sector[MAX];
struct node{
    int v, l, r;
}st[MAX*34];
int next_id=1;
int root[MAX*17];
int version;

void build(int id, int in, int fn){
    if(in==fn){
        st[id].v= sector[in];
        return;
    }
    int md=(in+fn)/2;
    int lf, rg;
    st[id].l= lf = ++next_id;
    st[id].r= rg = ++next_id;

    build(lf, in, md);
    build(rg, md+1, fn);
    st[id].v= max(st[lf].v, st[rg].v);
}

int lf, rg;
int query(int id, int in, int fn){
    if(in>rg||fn<lf) return -INF;
    if(in>=lf&&fn<=rg) return st[id].v;

    int md=(in+fn)/2;
    return max( query(st[id].l, in, md), query(st[id].r, md+1, fn) );
}

int sec, v;
void update(int id, int prev, int in, int fn){
    //cout<<in<<" "<<fn<<"\n";
    if(in>sec||fn<sec) return;
    if(in==fn){
        st[id].v= v;
        return;
    }

    int md=(in+fn)/2;
    if(sec<=md){
        st[id].r= st[prev].r;
        st[id].l= ++next_id;
        update(st[id].l, st[prev].l, in, md);
    }
    else{
        st[id].l= st[prev].l;
        st[id].r= ++next_id;
        update(st[id].r, st[prev].r, md+1, fn);
    }
    st[id].v= max(st[st[id].l].v, st[st[id].r].v);
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>sector[i];
    root[++version]= 1;
    build(1, 1, n);
    int p;
    for(int i=1; i<=q; i++){
        cin>>p;
        if(p==0){
            cin>>lf>>rg;
            lf++, rg++;
            cout<<query(root[version], 1, n)<<"\n";
        }
        if(p==1){
            cin>>sec>>v;
            sec++;
            root[++version]= ++next_id;
            update(root[version], root[version-1], 1, n);
        }
        if(p==2){
            cin>>v;
            v++;
            root[++version]= root[version-v];
        }
    }
}
