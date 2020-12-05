#include<iostream>
#include<queue>
#define MAX 41
using namespace std;

struct st{
    int x1,y1, x2,y2, m;
}l,c;
queue<st>q;

int n;
char world[MAX][MAX];
bool seen[MAX][MAX][MAX][MAX];
int movx[]={1,0,-1,0};
int movy[]={0,1,0,-1};
bool ok;

int h(int y, int x, int i){
    if(!i)return x;
    for(x+=i; ;x+=i) if(world[y][x]!='.') return x-i;
}
int v(int y, int x, int i){
    if(!i)return y;
    for(y+=i; ;y+=i) if(world[y][x]!='.') return y-i;
}

void bfs(){
    while(!q.empty()){
        l=q.front();
        q.pop();
        c.m= l.m+1;
        cout<<l.y1<<" "<<l.x1<<" "<<l.y2<<" "<<l.x2<<" "<<l.m<<"\n";
        for(int i=0; i<4; i++){
            if( world[l.x1-movx[i]][l.y1-movy[i]] != '.') continue;
            c.x1= h(l.y1,l.x1,movx[i]);
            c.y1= v(l.y1,l.x1,movy[i]);
            c.x2= l.x2;
            c.y2= l.y2;
            if( world[c.x1+movx[i]][c.y1+movy[i]] == 'A'){
                cout<<c.m;
                return;
            }
            if(seen[c.y1][c.x1][c.y2][c.x2]) continue;
            seen[c.y1][c.x1][c.y2][c.x2]=1;
            q.push(c);
        }
        for(int i=0; i<4; i++){
            if( world[l.x2-movx[i]][l.y2-movy[i]] != '.') continue;
            c.x1= l.x1;
            c.y1= l.y1;
            c.x2= h(l.y2,l.x2,movx[i]);
            c.y2= v(l.y2,l.x2,movy[i]);
            if( world[c.x2+movx[i]][c.y2+movy[i]] == 'A'){
                cout<<c.m;
                return;
            }
            if(seen[c.y1][c.x1][c.y2][c.x2]) continue;
            seen[c.y1][c.x1][c.y2][c.x2]=1;
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
            if(world[i][j]=='B'){
                if(ok) c.y2=i,c.x2=j,world[i][j]='#';
                else c.y1=i,c.x1=j,world[i][j]='#', ok=1;
            }
        }
    }
    q.push(c);
    bfs();
}
