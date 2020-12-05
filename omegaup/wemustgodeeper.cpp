#include<bits/stdc++.h>
using namespace std;
bool check();
int sudoku[9][9];
bool column[10][9];
bool file[9][10];
bool square[9][10];
bool solve(int x,int y){
    if(y==9)return 1;
    if(x==9)return solve(0,y+1);
    if(sudoku[y][x])return solve(x+1,y);
    int s=y/3,p=x/3;
    s=s*3+p;
    for(int i=1;i<=9;i++){
        if(file[y][i])continue;
        if(column[i][x])continue;
        if(square[s][i])continue;
        file[y][i]=1,column[i][x]=1,square[s][i]=1;
        //r[y][x]=i;
        //cout<<x<<" "<<y<<" "<<i<<" "<<s<<"\n";
        if(solve(x+1,y)){
            //cout<<x<<" "<<y<<" "<<i<<"\n";
            sudoku[y][x]=i;
            return 1;
        }
        file[y][i]=0,column[i][x]=0,square[s][i]=0;
    }
    return 0;
}
bool check(){
    for(int j=0;j<9;j++){
        for(int i=1;i<=9;i++)if(!column[i][j])return 0;
    }
    return 1;
}
int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>sudoku[i][j];
            if(sudoku[i][j]){
                file[i][sudoku[i][j]]=1;
                column[sudoku[i][j]][j]=1;
                int s=i/3,p=j/3;
                s=s*3+p;
                //cout<<s<<" "<<p<<"\n";
                square[s][sudoku[i][j]]=1;
            }
        }
    }
    solve(0,0);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)cout<<sudoku[i][j]<<" ";
        cout<<"\n";
    }
    /*cout<<"\n";
    for(int i=0;i<9;i++){
        for(int j=0;j<10;j++)cout<<square[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++)cout<<column[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<9;i++){
        for(int j=0;j<10;j++)cout<<file[i][j]<<" ";
        cout<<"\n";
    }*/
}
/*
4 8 3 9 2 1 6 5 7
9 6 7 3 4 5 8 2 1
2 5 1 8 7 6 4 9 3
5 4 8 1 3 2 9 7 6
7 2 9 5 6 4 1 3 8
1 3 6 7 9 8 2 4 5
3 7 2 6 8 9 5 1 4
8 1 4 2 5 3 7 6 9
0 0 0 0 0 0 0 0 0

5 0 4 0 7 6 0 2 9
2 3 6 0 4 0 0 0 0
8 0 9 1 0 0 0 4 0
0 4 0 5 9 8 0 0 0
0 0 0 4 1 7 0 0 0
0 0 0 6 2 3 0 5 0
0 8 0 0 0 1 9 0 7
0 0 0 0 8 0 4 3 5
9 5 0 7 6 0 2 0 1
*/
