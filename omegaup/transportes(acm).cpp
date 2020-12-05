#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;
int n;
int c[4], p[4];
unsigned long long int cost;
struct node{
    int d, f;
}graph[MAX];
vector<int> edges[MAX];
bool vis[MAX];

void bfs(int u, int d, int f){
    vis[u]=1;
    graph[u]={d, f};
    for(int v=0; v<edges[u].size(); v++)
        if(vis[edges[u][v]]==0) bfs(edges[u][v], d+1, u);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=3; i++) cin>>c[i];
    for(int i=1; i<=3; i++) cin>>p[i];
    int u, v;
    for(int i=1; i<n; i++){
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    bfs(1, 0, 1);
    //for(int i=1; i<=n; i++) cout<<graph[i].d<<" "<<graph[i].f<<"\n";
    for(int i=1; i<=3; i++) cost+= graph[c[i]].d*p[1];
    cout<<cost;
}
