#include<iostream>
using namespace std;
#define MAX 100
bool graph[MAX][MAX];
bool visited[MAX];
int v,a,n,x,y;
void rp(int i){
    if(visited[i])return;
    visited[i]=1;
    cout<<i<<" ";
    for(int j=1;j<=v;j++){
        if(graph[i][j])rp(j);
    }
}
void clean(){ for(int j=1;j<=v;j++)visited[j]=0; }
int main(){
    cin>>v>>a>>n;
    while(a--){
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    while(n--){
        cin>>x;
        rp(x);
        clean();
        cout<<"\n";
    }
}
/*
9 10 1
1 2
1 9
2 3
2 4
3 4
4 8
8 7
5 7
5 6
3 5
1
*/
