#include<iostream>
#include<vector>
#define MAX 10001
using namespace std;
vector<int>tree[MAX];
int dad[MAX][15];
int h[MAX];
void lca(int a, int b){
    if(h[a]<h[b]) swap(a,b);
    int i=0;
    while(h[a]!=h[b]) a=dad[a][i++];
    i=0;
    while(a!=b){
        a=dad[a][i];
        b=dad[b][i++];
    }
    cout<<a<<"\n";
}
void create(int node, int father, int height){
    h[node]=height;
    dad[node][0]=father;
    for(int i=1; i<15; i++)
        dad[node][i]=dad[ dad[node][i-1] ][i-1];
    for(int i=0; i<tree[node].size(); i++)
        create(tree[node][i], node, height+1);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int c, n, m, x, v, w, q;
    cin>>c;
    for(int cc=1; cc<=c; cc++){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>m;
            tree[i].clear();
            for(int j=1; j<=m; j++){
                cin>>x;
                tree[i].push_back(x);
            }
        }
        create(1,1,1);
        cout<<"Case "<<cc<<":\n";
        cin>>q;
        for(int i=1; i<=q; i++){
            cin>>v>>w;
            lca(v,w);
        }
    }
}
