#include<iostream>
using namespace std;
#define MAX 5001
int n,m,d,k;
int parent[MAX];
int find(int x){
    if(parent[x]==x)return x;
    parent[x]=find(parent[x]);
    return parent[x];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a,b,p;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        parent[find(a)]=find(b);
    }
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>d>>k;
    }
}
