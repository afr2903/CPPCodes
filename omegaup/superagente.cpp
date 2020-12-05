#include<iostream>
#include<queue>
#define MAX 2000
using namespace std;

struct guard{
    int x,y,d;
};
queue<guard>q;
int n,m,maxd;
char world[MAX][MAX];
bool visited[MAX][MAX];
int axisx[]={1,0,-1,0};
int axisy[]={0,1,0,-1};

void push(int x,int y,int d){
    if(x<0||y<0||x==n||y==m)return;
    if(world[y][x]=='#')return;
    if(visited[y][x])return;
    visited[y][x]=1;
    guard a;
    a.x=x, a.y=y, a.d=d;
    q.push(a);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>world[i][j];
            if(world[i][j]=='G')push(j,i,0);
        }
    }
    guard a;
    while(!q.empty()){
        a=q.front();
        q.pop();
        maxd=a.d;
        for(int i=0;i<4;i++)
            push(a.x+axisx[i], a.y+axisy[i], a.d+1);
    }
    cout<<maxd;
}
