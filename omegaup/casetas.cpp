#include<iostream>
using namespace std;
int n,m, world[102][72], color;
bool seen[102][72];
void buscar(int x, int y, int v, int r){
    if(x==0 || y==0 || x>m || y>n)return;
    if(world[y][x]>v)return;
    if(seen[y][x])return;
    seen[y][x]=1;
    cout<<y<<" "<<x<<" "<<world[y][x]<<" "<<r<<"\n";
    buscar(x-1,y-1,world[y][x],r);
    buscar(x,y-1,world[y][x],r);
    buscar(x+1,y-1,world[y][x],r);
    buscar(x+1,y,world[y][x],r);
    buscar(x+1,y+1,world[y][x],r);
    buscar(x,y+1,world[y][x],r);
    buscar(x-1,y+1,world[y][x],r);
    buscar(x-1,y,world[y][x],r);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>world[i][j];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(seen[i][j])continue;
            if(world[i][j]<world[i-1][j-1] || seen[world[i-1][j-1]])continue;
            if(world[i][j]<world[i-1][j] || seen[world[i-1][j]])continue;
            if(world[i][j]<world[i-1][j+1] || seen[world[i-1][j+1]])continue;
            if(world[i][j]<world[i][j+1] || seen[world[i][j+1]])continue;
            if(world[i][j]<world[i+1][j+1] || seen[world[i+1][j+1]])continue;
            if(world[i][j]<world[i+1][j] || seen[world[i+1][j]])continue;
            if(world[i][j]<world[i+1][j-1] || seen[world[i+1][j-1]])continue;
            if(world[i][j]<world[i][j-1] || seen[world[i][j-1]])continue;
            cout<<i<<" "<<j<<"\n";
            buscar(j,i, world[i][j], world[i][j]);
            color++;
        }
    }
    cout<<color;
}
/*
5 5
1 1 1 1 1
1 4 1 1 0
1 4 3 0 0
2 0 0 0 0
0 0 5 6 7
*/
