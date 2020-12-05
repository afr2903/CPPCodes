#include<iostream>
using namespace std;
#define MAX 100
bool grafo[MAX][MAX];
int main(){
    int v,a,x,y;
    cin>>v>>a;
    for(int i=0;i<a;i++){
        cin>>x>>y;
        grafo[x][y]=1;
        grafo[y][x]=1;
    }
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++)cout<<grafo[i][j]<<" ";
        cout<<"\n";
    }
}
