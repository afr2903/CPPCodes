#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int mapa[5][5];
int vuzkr(int,int,int=0);
int l=25;
void print();
int main(){
    int x,y,h,v;
    cin>>x>>y>>h>>v;
    mapa[v][h]=62;
    vuzkr(y,x);
    //cout<<l;
    /*for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(mapa[i][j]==0)cout<<".";
            else cout<<mapa[i][j];
        }
        cout<<"\n";
    }
    while(x!=h&&y!=v){
        if(x<10){
            mapa[x++][y]=p++;
        }

    }*/
}
int vuzkr(int y,int x,int p){
    if(mapa[y][x]==62){
        if(p<l)l=p;
        return 0;
    }
    if(mapa[y][x]<p && mapa[y][x])return 0;
    mapa[y][x]=p;
    system("cls");
    print();
    system("pause");
    if(x+1<5){
        vuzkr(y,x+1,p+1);
    }
    if(y-1>=0){
        vuzkr(y-1,x,p+1);
    }
    if(x-1>=0){
        vuzkr(y,x+1,p+1);
    }
    if(y+1<5){
        vuzkr(y+1,x,p+1);
    }
}
void print(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mapa[i][j]==0)cout<<".";
            else cout<<mapa[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
}
