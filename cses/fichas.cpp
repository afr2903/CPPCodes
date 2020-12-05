#include<iostream>
#include<vector>
using namespace std;

#define MAX 1001
int n, m;
char world[MAX][MAX];
bool f=false, c=false;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>world[i][j];
    for(int i=1; i<=n; i++){
        c = f = !f;
        for(int j=1; j<=m; j++){
            if(world[i][j]=='.') world[i][j] = c? 'N' : 'B';
            c = !c;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cout<<world[i][j];
        cout<<"\n";
    }
}
