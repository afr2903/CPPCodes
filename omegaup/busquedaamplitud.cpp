#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
struct p{
    int x,y,t;
}q[MAX];
char world[MAX][MAX];
int b[MAX][MAX];
int n,i,f;
bool push(int x,int y,int t){
    if(x<0||x==n||y<0||y==n)return 0;
    if(world[y][x]=='F'){
        cout<<t;
        return 1;
    }
    if(world[y][x]=='#')return 0;
    if(b[y][x]>0)if(t>=b[y][x])return 0;
    b[y][x]=t;
    p k;
    k.x=x, k.y=y, k.t=t;
    q[f++]=k;
    f%=MAX;
    return 0;
}
p pop(){
    return q[i++];
}
int main(){
    cin>>n;
    p a;
    for(int l=0;l<n;l++){
        for(int j=0;j<n;j++){
            cin>>world[l][j];
            if(world[l][j]=='I')push(j,l,0);
        }
    }
    while(i!=f){
        a=pop();
        if(i==MAX)i=0;
        if(push(a.x,a.y-1,a.t+1))break;
        if(push(a.x+1,a.y,a.t+1))break;
        if(push(a.x,a.y+1,a.t+1))break;
        if(push(a.x-1,a.y,a.t+1))break;
    }
}
/*
5
# # # . .
. . . # .
. . I . .
. . . . .
F . . . #
*/
