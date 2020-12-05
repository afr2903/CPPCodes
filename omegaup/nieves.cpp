#include<iostream>
#include<queue>
#define MAX 1001
using namespace std;
struct st{
    int x, y, k, lx, ly;
}sig, current;
queue<st>q;
int n, m, ix, iy, fx, fy, mod;
int world[MAX][MAX];
bool seen[MAX][MAX][6];
char c;
int axisx[]={0,1,0,-1,0};
int axisy[]={0,0,1,0,-1};

int main(){
    //ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>ix>>iy>>fx>>fy;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>c;
            world[i][j]=c-'0';
        }
    }
    current={ix,iy,0,ix,iy};
    q.push(current);
    while(!q.empty()){
        current=q.front();
        //cout<<current.x<<" "<<current.y<<" "<<current.k<<"\n";
        q.pop();
        sig=current;
        sig.k++;
        for(int i=0; i<=4; i++){
            sig.x=current.x+axisx[i];
            sig.y=current.y+axisy[i];
            if(!world[sig.y][sig.x]) mod=0;
            else mod= sig.k % world[sig.y][sig.x];

            if(sig.x>m || sig.x==0 || sig.y>n || sig.y==0) continue;
            if(world[sig.y][sig.x]) if(!mod) continue;
            if(sig.x==fx && sig.y==fy){
                cout<<sig.k;
                exit(0);
            }

            if(i) if(seen[sig.y][sig.x][mod]) continue;
            seen[sig.y][sig.x][mod]=1;

            q.push(sig);
        }

    }
}
