#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;
int n, m, centroid;
int siz[MAX];
char ans[MAX];
bool vis[MAX], dead[MAX];
vector<int>graph[MAX], used;
int bfs(int node){
    if(vis[node]) return 0;
    vis[node]=1, siz[node]=1;
    used.push_back(node);
    for(auto i:graph[node])
        siz[node]+= bfs(i);
    return siz[node];
}
void find_centroid(int node){
    if(vis[node]) return;
    vis[node]=1;
    used.push_back(node);
    if(siz[node]>=m) centroid=node;
    for(auto i:graph[node])
        find_centroid(i);
}
void clear_vis(){
    for(auto i:used) vis[i]=0;
    used.clear();
}
void assign_rank(int node, char cr){
    //cout<<node<<" "<<cr<<"\n";
    if(vis[node]) return;
    bfs(node);
    clear_vis();
    m= siz[node]/2;
    find_centroid(node);
    clear_vis();
    vis[centroid]=1;
    ans[centroid]=cr;
    for(auto i:graph[centroid])
        assign_rank(i, cr+1);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int a,b;
    for(int i=1; i<n; i++){
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    assign_rank(1,'A');
    for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
}
