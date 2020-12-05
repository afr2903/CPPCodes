#include<iostream>
using namespace std;
#define MAX 50
int n,d,y,x,c,m;
int parent[MAX*MAX];
int find(int x){
    if(parent[x]==x)return x;
    return parent[x]=find(parent[x]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>y>>x;
    d=y*n+x, m=n*n;
    for(int i=0;i<m;i++)parent[i]=i;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>y>>x;
            if(y==-1||x==-1)continue;
            y=y*n+x;
            x=i*n+j;
            if(x==d)continue;
            parent[find(x)]=find(y);
        }
    }
    d=find(d);
    for(int i=0;i<m;i++)if(find(i)==d)c++;
    cout<<c-1;

}
