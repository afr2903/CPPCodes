#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 1000001
using namespace std;
int n, m, j;
unsigned long long k, sum;
vector< pair<int, pair<int,int>> >edges;
pair<int, pair<int,int>> node;
int parent[MAX];
int mst[MAX];

int find(int a){
    if(parent[a]==a)return a;
    return parent[a]=find(parent[a]);
}
void join(int a, int b){
    parent[find(a)]=find(b);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=1; i<=m; i++){
        cin>>node.second.first>>node.second.second>>node.first;
        edges.push_back(node);
    }
    sort(edges.begin(), edges.end());
    for(int i=1; i<=n; i++) parent[i]=i;

    for(int i=0; i<m; i++){
        if(find(edges[i].second.first)!=find(edges[i].second.second)){
            join(edges[i].second.first, edges[i].second.second);
            mst[++j]=edges[i].first;
            sum+=mst[j];
        }
    }
    cout<<sum<<"\n";
    int s=j;
    for(; j>0; j--){
        if(sum<=k)break;
        sum-=mst[j]-1;
    }
    cout<<s<<"\n";
    if(sum>k) cout<<-1;
    else cout<<s-j;
}
