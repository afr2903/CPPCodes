#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 1000001

int e,a,m;
int parent[MAX];
int find(int x){
    if(x==parent[x])return x;
    return parent[x]=find(parent[x]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>e;
    for(int i=1;i<=e;i++)parent[i]=i;
    for(int i=1;i<=e;i++){
        cin>>a;
        parent[find(i)]=find(a);
    }
    for(int i=1;i<=e;i++)parent[i]=find(i);
    sort(parent+1,parent+e+1);
    a=0;
    for(int i=1;i<=e;i++){
        if(parent[i]==parent[i-1]){
            a++;
            continue;
        }
        m=max(a,m);
        a=1;
    }
    m=max(a,m);
    //for(int i=1;i<=e;i++)cout<<parent[i]<<" ";
    cout<<m;
}
