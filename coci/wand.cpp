#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;
int n, m, x, y;
vector<int>duel[MAX];
bool wizard[MAX];
void dfs(int node){
    for(int i=0; i<duel[node].size(); i++){
        if(wizard[duel[node][i]])continue;
        wizard[duel[node][i]]=1;
        dfs(duel[node][i]);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        cin>>x>>y;
        duel[y].push_back(x);
    }
    dfs(1);
    for(int i=1; i<=n; i++) cout<<wizard[i];
}
