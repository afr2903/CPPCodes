#include<iostream>
#include<queue>
#define MAX 51
using namespace std;

struct st{
    int xm,ym, xl,yl, t;
}l,c;
queue<st>q;

int n;
char world[MAX][MAX];
bool seen[MAX][MAX][MAX][MAX];
int movx[]={1,0,-1,0};
int movy[]={0,1,0,-1};

void bfs(){
    while(!q.empty()){
        l=q.front();
        q.pop();
        c.t= l.t+1;
        //cout<<l.ym<<" "<<l.xm<<" "<<l.yl<<" "<<l.xl<<" "<<l.t<<"\n";
        if(world[l.ym][l.xm]=='S' && world[l.yl][l.xl]=='S'){
            cout<<l.t;
            return;
        }
        for(int i=0; i<4; i++){
            c.xm= l.xm+movx[i];
            c.ym= l.ym+movy[i];
            c.xl= l.xl;
            c.yl= l.yl;
            if(c.xm>n ||c.ym>n || c.xm==0|| c.ym==0) continue;
            if(world[c.ym][c.xm]=='#')continue;
            if(world[c.ym][c.xm]=='*') if(world[c.yl][c.xl]!='B') continue;
            if(seen[c.ym][c.xm][c.yl][c.xl]) continue;
            seen[c.ym][c.xm][c.yl][c.xl]=1;
            q.push(c);
        }
        for(int i=0; i<4; i++){
            c.xm= l.xm;
            c.ym= l.ym;
            c.xl= l.xl+movx[i];
            c.yl= l.yl+movy[i];
            if(c.xl>n ||c.yl>n || c.xl==0|| c.yl==0) continue;
            if(world[c.yl][c.xl]=='#')continue;
            if(world[c.yl][c.xl]=='*') if(world[c.ym][c.xm]!='B') continue;
            if(seen[c.ym][c.xm][c.yl][c.xl]) continue;
            seen[c.ym][c.xm][c.yl][c.xl]=1;
            q.push(c);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>world[i][j];
            if(world[i][j]=='M') c.ym=i,c.xm=j,world[i][j]='.';
            if(world[i][j]=='L') c.yl=i,c.xl=j,world[i][j]='.';
        }
    }
    q.push(c);
    bfs();
}
