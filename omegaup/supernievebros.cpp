#include<iostream>
using namespace std;
#define MAX 51
int n, m, r, c, stairway=MAX-1;
char world[MAX][MAX];
int visited[MAX][MAX];
int down(int y, int x){
    while(world[++y][x]=='.' && y<=n);
    return y;
}
int up(int y, int x){
    while(world[--y][x]=='.' && y>0);
    return y;
}
void search(int y, int x, int s){
    if(x==0 || y==0 || x>m ||y>n) return;
    if(world[y][x]=='.') return;
    if(visited[y][x]==s) return;
    visited[y][x]=s;
    if(x==c && y==r) return;

    search(y,x+1,s);
    search(y,x-1,s);
    int u=up(y,x), d=down(y,x);
    if(y-u<=s && u!=0)search(u,x,s);
    if(d-y<=s && d<n)search(d,x,s);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>r>>c;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>world[i][j];
    int b=0, e=n, h;
    while(b<=e && stairway>b){
        h=(b+e)/2;
        search(n,1,h);
        if(visited[r][c]==h) e=h-1, stairway=min(stairway,h);
        else b=h+1;
    }
    cout<<stairway;
    /*search(n,1,2);
    if(visited[r][c]==2) cout<<1<<"\n";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cout<<visited[i][j];
        cout<<"\n";
    }*/

}
