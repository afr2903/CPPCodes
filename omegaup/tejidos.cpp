#include<iostream>
using namespace std;
int n;
char square[2001][2001];
bool visited[2001][2001];
void visit(int,int);
int height(int x,int y){
    int h=1;
    for(;y<=n;y++,h++){
        if(square[y][x]=='.')return h;
    }
    return h;
}
bool rhombus(int h,int x,int y){
    for(int i=1;i<=h;y++,i+=2){
        int c=1;
        for(int j=x-1;j>0;j--,c++){
            if(square[y][j]=='.')break;
            visited[y][j]=1;
        }
        for(int j=x+1;j<=n;j++,c++){
            if(square[y][j]=='.')break;
            visited[y][j]=1;
        }
        if(c!=i){
            visit(x,y);
            return 0;
        }
        visited[y][x]=1;
    }
    for(int i=h-2;i>=1;y++,i-=2){
        int c=1;
        for(int j=x-1;j>0;j--,c++){
            if(square[y][j]=='.')break;
            visited[y][j]=1;
        }
        for(int j=x+1;j<=n;j++,c++){
            if(square[y][j]=='.')break;
        }
        if(c!=i){
            visit(x,y);
            return 0;
        }
        visited[y][x]=1;
    }
    return 1;
}
void visit(int x,int y){
    if(y==0||x==0||y>n||x>n)return;
    if(square[y][x]=='.')return;
    if(visited[y][x])return;
    visited[y][x]=1;
    visit(x,y-1);
    visit(x+1,y);
    visit(x,y+1);
    visit(x-1,y);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m=-1;
    cin>>n;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>square[i][j];
    if(n<3){
        cout<<m;
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(square[i][j]=='.')continue;
            if(visited[i][j])continue;
            int h=height(j,i+1);
            if(h%2==0||h==1){
                visit(j,i);
                continue;
            }
            if(rhombus(h,j,i)){
                if(h>m)m=h;
            }
        }
    }
    cout<<m;
}
/*
10
.O........
OOO.......
.O........
...OO.....
..OOO..O..
...OO.OOO.
...O.OOOOO
......OOO.
.O.....O..
..........
*/
