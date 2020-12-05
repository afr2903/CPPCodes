#include<iostream>
#define MAX 11
using namespace std;

char world[MAX][MAX];
bool seen[MAX][MAX];
string row;
int f,c, vis;

void dfs(int x, int y, int lx, int ly, int cm){
    if(cm==0)return;
    if(x==0 || y==0 || x>c || y>f)return;
    if(world[y][x]=='.')return;
    if(world[y][x]=='|' && x!=lx)return;
    if(world[y][x]=='-' && y!=ly)return;
    if(seen[y][x])return;
    //cout<<y<<" "<<x<<"\n";
    seen[y][x]=1, vis++;

    if(world[y][x]=='+'||world[y][x]=='-') dfs(x+1,y, x,y, cm-1);
    if(world[y][x]=='+'||world[y][x]=='|') dfs(x,y+1, x,y, cm-1);
    if(world[y][x]=='+'||world[y][x]=='-') dfs(x-1,y, x,y, cm-1);
    if(world[y][x]=='+'||world[y][x]=='|') dfs(x,y-1, x,y, cm-1);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x,y,m;
    while(1){
        cin>>row;
        if(row=="#")break;
        f++;
        for(int i=1; i<=row.size(); i++){
            world[f][i]=row[i-1];
            if(world[f][i]=='S') y=f, x=i, world[f][i]='+';
        }
        if(!c) c=row.size();
    }
    cin>>m;
    dfs(x,y,x,y,m);
    cout<<vis;
}
/*
S....
|+--+
....|
.---+
*/
