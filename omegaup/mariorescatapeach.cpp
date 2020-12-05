#include<bits/stdc++.h>
#define MAX 1001
using namespace std;
struct step{
    int y,x,t;
}q[MAX*MAX];
char world[MAX][MAX];
bool visited[MAX][MAX];
int n,m,k,i=0,f=0,o;
int axisx[]={1,0,-1,0};
int axisy[]={0,1,0,-1};
bool push(int x,int y,int t){
    if(x<0||y<0||x==m||y==n)return 0;
    if(visited[y][x])return 0;
    if(world[y][x]=='P'){
        cout<<t;
        return 1;
    }
    //cout<<y<<" "<<x<<" "<<t<<" "<<p<<"\n";
    visited[y][x]=1;
    step a;
    a.x=x, a.y=y, a.t=t;
    q[f]=a;
    ++f%=MAX*MAX;
    return 0;
}
step pop(){
    return q[i++];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    step a;
    bool ok=0;
    cin>>n>>m>>k;
    for(int l=0;l<n;l++){
        for(int j=0;j<m;j++){
            cin>>world[l][j];
            if(world[l][j]=='M')push(j,l,0);
        }
    }
    while(i!=f){
        a=pop();
        if(a.t+1==k&&!ok){
            for(int l=0;l<n;l++)for(int j=0;j<m;j++)if(world[l][j]=='E')push(j,l,k);
            ok=1;
        }
        i%=MAX*MAX;
        if(world[a.y][a.x]=='#'){
            world[a.y][a.x]='.';
            a.t++;
            q[f]=a;
            ++f%=MAX*MAX;
            continue;
        }
        for(o=0;o<4;o++)if(push(a.x+axisx[o], a.y+axisy[o], a.t+1))return 0;

    }

}
