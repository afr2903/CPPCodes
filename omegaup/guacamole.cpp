#include<iostream>
using namespace std;
#define MAX 101
#define MAXT 501
int n, m, t;
long long p[MAX][MAX][MAXT], P[MAX][MAX], o=0, mp;
int I[MAX][MAX], S[MAX][MAX];
int axisx[]={0, 0, 1, 1, 1, 0, -1, -1, -1};
int axisy[]={0, -1, -1, 0, 1, 1, 1, 0, -1};
bool visited[MAX][MAX][MAXT];

long long golpear(int x, int y, int ct){

    if(ct>t)return o;
    if(visited[y][x][ct]) return p[y][x][ct];
    visited[y][x][ct]=1;

    bool current=0, next=0;
    if(ct >= I[y][x] && (ct-I[y][x]) %S[y][x] == 0) current=1;

    for(int i=0; i<9; i++){
        int nx= x+axisx[i];
        int ny= y+axisy[i];
        if(nx>=0 && ny>=0 && nx<m && ny<n){
            if(!next){
                p[y][x][ct]=golpear(nx, ny, ct+1);
                next=1;
            }
            p[y][x][ct]= max(p[y][x][ct], golpear(nx, ny, ct+1));
        }
    }
    if(current) p[y][x][ct]+=P[y][x];
    return p[y][x][ct];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>t;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>I[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>S[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>P[i][j];
    mp=golpear(0,0,1);
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) mp=max(mp, golpear(i,j,1));
    cout<<mp;
}
