#include<iostream>
using namespace std;
#define MAX 1001
int n,m,q;
int matriz[MAX][MAX];
int main(){
    int a;
    int x1,x2,y1,y2;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a;
            matriz[i][j]= a + matriz[i-1][j] + matriz[i][j-1] - matriz[i-1][j-1];
        }
    }
    cin>>q;
    for(;q>0;q--){
        cin>>x1>>y1>>x2>>y2;
        x2--,y2--;
        x1--,y1--;
        cout<<matriz[y2][x2] - matriz[y2][x1] - matriz[y1][x2] + matriz[y1][x1]<<"\n";
    }
}
/*
3 3
1 2 3
4 5 6
7 8 9
5
1 1 3 3
2 2 3 3
1 1 4 4
2 2 4 4
3 3 4 4
*/
