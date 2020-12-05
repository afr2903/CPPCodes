#include<bits/stdc++.h>
using namespace std;
#define MAX 1001
char world[MAX][MAX];
int m,n,d,i,f;
struct s{
    int x,y,t;
}q[MAX*MAX];
int visited[MAX][MAX];
bool push(int x,int y,int t){
    if(x<0||y<0||x==n||y==m)return 0;
    if(world[y][x]=='X')return 0;
    if(world[y][x]=='O'){
        if(t<=d)cout<<t;
        return 1;
    }
    if(t>d){
        cout<<"-1";
        return 1;
    }
    if(visited[y][x])if(visited[y][x]<=t)return 0;
    visited[y][x]=t;
    //cout<<y<<" "<<x<<" "<<t<<"\n";
    s a;
    a.x=x,a.y=y,a.t=t;
    q[f++]=a;
    f%=MAX*MAX;
    return 0;
}
s pop(){
    return q[i++];
}
int main(){
    cin>>m>>n>>d;
    for(int k=0;k<m;k++){
        for(int j=0;j<n;j++){
            cin>>world[k][j];
            if(world[k][j]=='C')push(j,k,0);
        }
    }
    s a;
    while(i!=f){
        a=pop();
        i%=MAX;
        if(push(a.x+1,a.y,a.t+1))break;
        if(push(a.x,a.y+1,a.t+1))break;
        if(push(a.x-1,a.y,a.t+1))break;
        if(push(a.x,a.y-1,a.t+1))break;
    }
}
