#include<bits/stdc++.h>
using namespace std;
#define MAX 1251
int u(int,int);
int d(int,int);
int r(int,int);
int l(int,int);
char world[MAX][MAX];
struct step{
    int x,y,t;
}q[MAX*MAX];
int m,n,i=0,f=0,k;
int axisx[]={1,0,-1,0};
int axisy[]={0,1,0,-1};
int b[MAX][MAX];
bool push(int x,int y,int t){
    if(x<0||x==n||y<0||y==m)return 0;
    if(world[y][x]=='#'){
        switch(k){
            case 0:
                if(push(x-1,u(x-1,y),t))return 1;
                if(push(x-1,d(x-1,y),t))return 1;
                if(push(l(x-1,y),y,t))return 1;
                return 0;
            case 1:
                if(push(x,u(x,y-1),t))return 1;
                if(push(r(x,y-1),y-1,t))return 1;
                if(push(l(x,y-1),y-1,t))return 1;
                return 0;
            case 2:
                if(push(x+1,u(x+1,y),t))return 1;
                if(push(x+1,d(x+1,y),t))return 1;
                if(push(r(x+1,y),y,t))return 1;
                return 0;
            case 3:
                if(push(x,d(x,y+1),t))return 1;
                if(push(r(x,y+1),y+1,t))return 1;
                if(push(l(x,y+1),y+1,t))return 1;
                return 0;
        }
    }
    if(world[y][x]=='X'){
        cout<<t;
        return 1;
    }
    if(b[y][x]>0)if(t>=b[y][x])return 0;
    //cout<<x<<" "<<y<<" "<<t<<"\n";
    b[y][x]=t;
    step k;
    k.x=x, k.y=y, k.t=t;
    q[f++]=k;
    f%=MAX*MAX;
    return 0;
}
step pop(){
    return q[i++];
}
int u(int x,int y){for(y;y>=0;y--)if(world[y][x]=='#')return y+1;}
int d(int x,int y){for(y;y<m;y++)if(world[y][x]=='#')return y-1;}
int r(int x,int y){for(x;x<n;x++)if(world[y][x]=='#')return x-1;}
int l(int x,int y){for(x;x>=0;x--)if(world[y][x]=='#')return x+1;}
int main(){
    cin>>m>>n;
    for(k=0;k<m;k++){
        for(int j=0;j<n;j++){
            cin>>world[k][j];
            if(world[k][j]=='O')push(j,k,0);
        }
    }
    step a;
    while(i!=f){
        a=pop();
        i%=MAX*MAX;
        for(k=0;k<4;k++)if(push(a.x+axisx[k],a.y+axisy[k],a.t+1))return 0;
    }
    cout<<"THE CAKE IS A LIE";
}
/*
10 10
##########
###..##O.#
#....##..#
#........#
#........#
#...X....#
#........#
#........#
#..#.....#
##########
*/
