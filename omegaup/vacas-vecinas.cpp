#include<iostream>
#include<vector>
using namespace std;
#define MAX 100001
int n,k, a,b,i;
vector<int>graph[MAX];
int c[MAX];
int dis[MAX][21];
int seen[MAX];
void visit(int d, int m){
    if(seen[m]==i)return;
    seen[m]=i;
    if(d>k)return;
    if(m<i){
        dis[i][d]+=(dis[m][k-d]-c[i]);
        return;
    }
    dis[i][d]+=c[m];
    for(int j=0; j<graph[m].size(); j++){
        visit(d+1,graph[m][j]);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(i=1; i<n; i++){
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(i=1; i<=n; i++)cin>>c[i];

    for(i=1; i<=n; i++){
        visit(0,i);
        for(int j=1; j<=k; j++) dis[i][j]+=dis[i][j-1];
        cout<<dis[i][k]<<"\n";
    }
}
