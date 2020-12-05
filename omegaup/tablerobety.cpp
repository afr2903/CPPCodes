#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int n, m, k, e, v, h;
int tablero[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0; i<k; i++){
        cin>>e;
        if(e==1) v++;
        else if(e==2) v--;
        else if(e==3) h++;
        else h--;
    }
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>tablero[i][j];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int y=(i+v)%n, x=(j+h)%m;
            cout<<tablero[y<0? n+y:y][x<0? m+x:x]<<" ";
        }
        cout<<"\n";
    }
}
