#include<bits/stdc++.h>
using namespace std;
void check();
void comb(int,int);
int casa[5][5];
bool b=1;
int main(){
    for(int i=0;i<5;i++)for(int j=0;j<5;j++)casa[i][j]=j+1;
    comb(0,5);
}
void comb(int r, int n){
    int a;
    if(n==0){
        for(int j=0;j<5;j++)cout<<casa[r][j];
        cout<<"\n";
        if(r==4){
            check();
            return;
        }
        comb(r+1,5);
    }
    for(int j=0;j<n;j++){
        a=casa[r][j];
        casa[r][j]=casa[r][n-1];
        casa[r][n-1]=a;
        comb(r,n-1);
        a=casa[r][j];
        casa[r][j]=casa[0][n-1];
        casa[r][n-1]=a;
    }
}
void check(){
    if(casa[0][0]!=casa[1][0])return;
    if(casa[0][1]!=casa[2][0])return;
    if(casa[0][2]!=casa[3][0])return;
    if(casa[0][3]!=1)return;
    if(casa[0][4]!=casa[4][0])return;
    if(casa[1][1]!=(casa[1][2])-1)return;
    if(casa[1][1]!=casa[3][1])return;
    if(casa[4][1]!=casa[2][1])return;
    if(casa[1][3]!=casa[4][2])return;
    if(casa[3][2]!=3)return;
    if(casa[4][3]!=(casa[2][2])+1&&casa[4][3]!=(casa[2][2])-1)return;
    if(casa[2][3]!=(casa[4][2])+1&&casa[2][3]!=(casa[4][2])-1)return;
    if(casa[4][4]!=casa[3][3])return;
    if(casa[4][3]!=(casa[3][4])+1&&casa[4][3]!=(casa[3][4])-1)return;
    if(casa[0][3]!=(casa[1][4])+1&&casa[0][3]!=(casa[1][4])-1)return;
    cin>>b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)cout<<casa[i][j]<<" ";
        cout<<"\n";
    }
    cin>>b;
}
