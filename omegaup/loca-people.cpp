#include<iostream>
using namespace std;
#define MAX 1001
int n,m;
bool world[MAX][MAX];
int rectangle[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>world[i][j];
            if(world[i][j]) rectangle[i][j]= rectangle[i][j-1]+rectangle[i-1][j]-rectangle[i-1][j-1]+1;
        }
    }
    for(int i=1; i<=n; i++){
        cout<<"\n";
        for(int j=1; j<=m; j++) cout<<rectangle[i][j]<<" ";

    }
}
