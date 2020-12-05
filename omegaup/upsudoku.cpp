#include<bits/stdc++.h>
using namespace std;
bool n[9];
int s[9][9];
void reset(){
    for(int i=0;i<9;i++)n[i]=0;
}
bool check(){
    if(n[0])if(n[1])if(n[2])if(n[3])if(n[4])if(n[5])if(n[6])if(n[7])if(n[8])return 1;
    cout<<"0";
    return 0;
}
void horizontal(int l){
    for(int i=0;i<9;i++)n[s[l][i]-1]=1;
}
void vertical(int l){
    for(int i=0;i<9;i++)n[s[i][l]-1]=1;
}
int main(){
    for(int i=0;i<9;i++)for(int j=0;j<9;j++)cin>>s[i][j];
    for(int i=0;i<9;i++){
        horizontal(i);
        if(check())reset();
        else return 0;
        vertical(i);
        if(check())reset();
        else return 0;
    }
    cout<<"1";
}
