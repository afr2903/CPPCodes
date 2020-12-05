#include<bits/stdc++.h>
using namespace std;
char world[1000][1000];
bool b[1000][1000];
int xaxis[]={-1,0,1,0};
int yaxis[]={0,-1,0,1};
int n,k,c;
void buscar(int x,int y,int s){
    if(world[y][x]=='#')return;
   if(s==k){
        if(world[y][x]=='F')c++;
        return;
   }
   for(int i=0;i<4;i++){
        int X=x+xaxis[i],Y=y+yaxis[i];
        if(x>=0&&y>=0&&x<n&&y<n){
            if(!b[Y][X]){
                if(world[Y][X]!='#'){
                    b[Y][X]=1;
                    buscar(X,Y,k+1);
                    b[Y][X]=0;
                }
            }
        }
   }
}
int main(){
    int x,y;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>world[i][j];
            if(world[i][j]=='I')y=i,x=j;
        }
    }
    buscar(x,y,0);
    cout<<c;
}
/*
3 3
. . I
. . .
F . .
*/
