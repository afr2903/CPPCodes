#include<iostream>
#include<vector>
#include<queue>
#define MAX 1000
using namespace std;
vector<int>g[MAX];
vector<int>w[MAX];
priority_queue< pair<int,int> >pq;
pair<int,int> f,s;
bool seen[MAX];
int cost[MAX];
int n, m, a, b, c;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        cin>>a>>b>>c;
        g[a].push_back(b);
        g[b].push_back(a);
        w[a].push_back(c);
        w[b].push_back(c);
    }
    f.first=0; //costo
    f.second=1; //nodo
    pq.push(f);
    while(!pq.empty()){
        f=pq.top();
        pq.pop();

        if(seen[f.second])continue;
        seen[f.second]=1;
        cost[f.second]=f.first;
        for(int i=0; i<g[f.second].size(); i++){
            s.second= g[f.second][i];
            if(seen[s.second])continue;
            s.first= f.first+w[f.second][i];
            cout<<s.first<<" "<<s.second<<"\n";
            pq.push(s);
        }
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<g[i].size(); j++)cout<<g[i][j]<<" ";
        cout<<"\n";
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<w[i].size(); j++)cout<<w[i][j]<<" ";
        cout<<"\n";
    }

    for(int i=0; i<=n; i++) cout<<cost[i]<<" ";
}
/*
5 6
1 2 2
1 3 5
2 3 17
2 5 10
3 5 8
3 4 4
*/
