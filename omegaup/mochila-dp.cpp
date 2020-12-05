#include<iostream>
using namespace std;
#define MAX 500
int n,c;
int p[MAX], w[MAX];
int m,times;
int space[MAX][MAX];
void dp(){
    int last=0,cw;
    for(int i=1; i<=n; i++){
        //for(int j=1; j<=last; j++) space[i][j]=space[i-1][j];
        for(int j=last; j>=1; j--){
            if(!space[1][j])continue;
            cw=j+w[i];
            space[1][cw]=max(space[1][j]+p[i], space[1][cw]);
            last=max(cw,last);
        }
        if(i==1)last=w[i];
        space[1][w[i]]=max(p[i],space[1][w[i]]);
        last=min(last,c);
    }
}
int main(){
    cin>>n>>c;
    for(int i=1; i<=n; i++)cin>>w[i];
    for(int i=1; i<=n; i++)cin>>p[i];
    dp();
    for(int i=1; i<=c; i++)m=max(space[1][i],m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=c; j++) cout<<space[i][j]<<" ";
        cout<<"\n";
    }
    cout<<m;
}
/*
4 15
1 1 5 3
3 5 9 7
*/
