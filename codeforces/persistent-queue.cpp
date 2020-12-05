#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 200001
using namespace std;
int n;
struct update{
    int p, v;
}vers[MAX];
vector<int> op[MAX];
vector<int> q;
vector< pair<int,int> > ans;
pair<int,int> a;
int dfs(int id, int erased){
    if(vers[id].p==1){
        q.push_back(vers[id].v);
        for(auto u:op[id])
            dfs(u, erased);
        q.erase(q.end()-1);
    }
    else{
        a={id,q[erased]};
        ans.push_back(a);
        for(auto u:op[id])
            dfs(u, erased+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int p, v, x;
    for(int i=1; i<=n; i++){
        cin>>p;
        if(p==1){
            cin>>v>>x;
            op[v].push_back(i);
            vers[i]={1, x};
        }
        else{
            cin>>v;
            op[v].push_back(i);
            vers[i]={-1, 0};
        }
    }
    for(auto u:op[0])
        dfs(u, 0);
    sort(ans.begin(), ans.end());
    for(auto u:ans)
        cout<<u.second<<"\n";
}
