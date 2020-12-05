#include<iostream>
using namespace std;
char g[3][3];
bool check(int i,int j,char c){
    g[i][j]=c;
    if(g[i][0]==c)if(g[i][1]==c)if(g[i][2]==c)return true;
    if(g[0][j]==c)if(g[1][j]==c)if(g[2][j]==c)return true;
    if(g[0][0]==c)if(g[1][1]==c)if(g[2][2]==c)return true;
    if(g[0][2]==c)if(g[1][1]==c)if(g[2][0]==c)return true;
    return false;
}
bool x(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(g[i][j]=='x'){
                if(check(i,j,'x'))return true;
            }
            if(g[i][j]=='.'){
                if(check(i,j,'x'))return true;
                g[i][j]='.';
            }
        }
    }
    return false;
}
bool o(){
    int p=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(g[i][j]=='o'){
                if(check(i,j,'o'))return true;
            }
            if(g[i][j]=='.'){
                if(check(i,j,'o'))p++;
                if(p==2)return true;
                if(p==1)g[i][j]='x';
                else g[i][j]='.';
            }
        }
    }
    return false;
}
int main(){
    for(int i=0;i<3;i++)for(int j=0;j<3;j++)cin>>g[i][j];
    if(x())cout<<"GANO";
    else if(o())cout<<"PIERDO";
    else cout<<"EMPATE";
}

