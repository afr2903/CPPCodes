#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define MAX 1001
using namespace std;
struct st{
    int d,a;
}x,y;
int n,m,c,t;
int a,b;
vector<int>graph[MAX];
queue<st>q;
bool seen[MAX];
void dist(){
    x={0,c};
    q.push(x);
    seen[c]=1;
    while(!q.empty()){
        x=q.front();
        q.pop();
        y.d=x.d+1;
        for(int i=0; i<graph[a].size(); i++){
            if(seen[graph[a][i]])continue;
            seen[graph[a][i]]=1;
            //cout<<graph[a][i]<<"\n";
            if(graph[a][i]==t)return ;
            y.a=graph[a][i];
            q.push(y);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>c>>t;
    for(int i=1; i<=m; i++){
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dist();
    cout<<x.d;
    //if(x.d==abs(c-t))cout<<0;
}
