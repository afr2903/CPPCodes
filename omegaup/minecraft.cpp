#include<iostream>
#include<queue>
using namespace std;

struct mainkra{
    int x,y,t;
}a,niu;
queue<mainkra>q;
int n,m;
char world[501][501];
bool visited[501][501];
int axisx[]={1,0,-1,0};
int axisy[]={0,1,0,-1};
priority_queue< vector<int>, vector<vector<int>>, greater<vector<int>> > pq;
vector<int> current={0,0,0};
vector<int> next={0,0,0};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int fy,fx;
    cin>>n>>m;
    cin>>current[1]>>current[2]>>fy>>fx;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>world[i][j];
    pq.push(current);
    while(!pq.empty()){
        current=pq.top();
        pq.pop();
        current[0]++;
        if(world[current[1]][current[2]]>'0'){
            world[a.y][a.x]--;
            q.push(a);
            continue;
        }
        niu.t=a.t;
        for(int i=0;i<4;i++){
            niu.y=a.y+axisy[i];
            niu.x=a.x+axisx[i];
            if(niu.y==0||niu.x==0||niu.y>n||niu.x>m)continue;
            if(niu.y==fy&&niu.x==fx){
                if(world[fy][fx]>'0')niu.t+=world[fy][fx]-'0';
                cout<<niu.t;
                return 0;
            }
            if(world[niu.y][niu.x]=='#')continue;
            if(visited[niu.y][niu.x])continue;
            visited[niu.y][niu.x]=1;
            q.push(niu);
        }
        //cout<<a.y<<" "<<a.x<<" "<<a.t<<"\n";
    }
}
