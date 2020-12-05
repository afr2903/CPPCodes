#include<iostream>
using namespace std;
int main(){
    int y,x,k=0,h=0,v=0;
    cin>>y>>x;
    int m[y][x];
    for(int i=0;i<y;i++)for(int j=0;j<x;j++)cin>>m[i][j];
    cin>>k;
    char g[k];
    for(int i=0;i<k;i++){
        cin>>g[i];
        if(g[i]=='V')v++;
        else h++;
    }
    if(v%2!=0&&h%2!=0)for(int i=y-1;i>=0;i--){
        for(int j=x-1;j>=0;j--)cout<<m[i][j]<<" ";
        cout<<"\n";
    }
    else if(h%2!=0)for(int i=0;i<y;i++){
        for(int j=x-1;j>=0;j--)cout<<m[i][j]<<" ";
        cout<<"\n";
    }
    else if(v%2!=0)for(int i=y-1;i>=0;i--){
        for(int j=0;j<x;j++)cout<<m[i][j]<<" ";
        cout<<"\n";
    }
    else for(int i=0;i<y;i++){
        for(int j=0;j<x;j++)cout<<m[i][j]<<" ";
        cout<<"\n";
    }
}
