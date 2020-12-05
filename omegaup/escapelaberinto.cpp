#include<iostream>
#include<queue>
using namespace std;
struct e{
    int x,y;
};
queue<e>q;
char maze[20][20];
bool visited[20][20];
int axisx[]={1,0,-1,0};
int axisy[]={0,1,0,-1};
int main(){
    int f,c,x,y;
    cin>>f>>c;
    bool b=0;
    e niu;
    for(int i=0;i<f;i++){
        char a=cin.get();
        for(int j=0;j<c;j++){
            maze[i][j]=cin.get();
            if(maze[i][j]=='E'){
                e niu;
                niu.x=j,niu.y=i;
                q.push(niu);
                visited[i][j]=1;
            }
            if(maze[i][j]=='S')b=1;
        }
    }
    if(!b){
        cout<<"No";
        return 0;
    }
    e a;
    while(!q.empty()){
        a=q.front();
        for(int i=0;i<4;i++){
            x=a.x+axisx[i];
            y=a.y+axisy[i];
            if(x<0||y<0||x==c||y==f)continue;
            if(maze[y][x]=='S'){
                cout<<"Si";
                return 0;
            }
            if(maze[y][x]=='#')continue;
            if(visited[y][x])continue;
            visited[y][x]=1;
            niu.x=x,niu.y=y;
            q.push(niu);
        }
        q.pop();
    }
    cout<<"No";
}
