#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;
int p, d, q, xi, di, pi, qi;
vector<int>graph[MAX];
bool vis[MAX], cycle[MAX], ans;

bool bfs(int node){
    if(vis[node]) return cycle[node];
    vis[node] = true;
    for(auto u:graph[node])
        if(bfs(u)) return cycle[node] = true;
    return cycle[node] = false;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>p>>d>>q;
    for(int i=1; i<=d; i++){
        cin>>xi>>di;
        for(int j=1; j<=di; j++){
            cin>>pi;
            graph[xi].push_back(pi);
        }
    }
    for(int i=1; i<=p; i++) cycle[i] = true;
    for(int i=1; i<=p; i++) bfs(i);
    for(int i=1; i<=q; i++){
        cin>>qi;
        ans = false;
        for(int j=1; j<=qi; j++){
            cin>>pi;
            ans= max(ans, cycle[pi]);
        }
        ans? cout<<"N\n": cout<<"S\n";
    }
}
