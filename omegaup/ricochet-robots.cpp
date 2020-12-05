#include<iostream>
#include<queue>
#define S 16
using namespace std;
struct st{
    int x[4], y[4];
}c,n;

struct wall{
    bool n,e;
}world[S+1][S+1];
queue<st>q;
int xt,yt;
int movx[]={1,0,-1,0};
int movy[]={0,1,0,-1};

int h(int y, int x, int m, int i){
    if(!m)return x;
    for(x+=m; ;x+=m){
        if(world[y][x].e) return x;
        for(int j=0; j<4; j++){
            if(j==i) continue;
            if(n.x[j]==x && n.y[j]==y) return x-m;
        }
    }
}
int v(int y, int x, int i){
    if(!m)return y;
    for(y+=m; ;y+=m){
        if(world[y][x].n) return x;
        for(int j=0; j<4; j++){
            if(j==i) continue;
            if(n.x[j]==x && n.y[j]==y) return x-m;
        }
    }
    if(!i)return y;
    for(y+=i; ;y+=i) if(world[y][x]!='.') return y-i;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n.y[0]>>n.x[0]>>n.y[1]>>n.x[1]>>n.y[2]>>n.x[2]>>n.y[3]>>n.x[3];
    cin>>xt>>yt;
    q.push(n);

    for(int i=1; i<=S; i++) world[1][i].n=1;
    for(int i=1; i<=S; i++) world[i][S].e=1;
    for(int i=1; i<=S; i++) world[S+1][i].n=1;
    for(int i=1; i<=S; i++) world[i][0].e=1;
    world[1][4].e=1, world[1][10].e=1;
    world[2][14].e=1;
    world[3][6].e=1, world[3][14].n=1, world[3][16].n=1;
    world[4][6].n=1, world[4][9].e=1, world[4][10].n=1;
    world[5][3].n=1, world[5][3].e=1, world[5][15].n=1, world[5][15].e=1;
    world[6][1].n=1, world[6][7].e=1;
    world[7][1].e=1, world[7][2].n=1, world[7][12].e=1;
    world[8][7].e=1, world[8][8].n=1, world[8][9].n=1, world[8][9].e=1;
    world[9][7].e=1, world[9][9].e=1;
    world[10][4].e=1, world[10][8].n=1, world[10][9].n=1, world[10][13].e=1;
    world[11][5].n=1, world[11][6].e=1, world[11][7].n=1, world[11][14].n=1;
    world[12][1].n=1, world[12][10].e=1;
    world[13][8].n=1, world[13][8].e=1, world[13][10].n=1, world[13][16].n=1;
    world[14][2].n=1, world[14][2].e=1, world[14][15].n=1, world[14][15].e=1;
    world[15][4].e=1, world[15][10].e=1, world[15][11].n=1;
    world[16][4].n=1, world[16][5].e=1, world[16][12].e=1;
}
