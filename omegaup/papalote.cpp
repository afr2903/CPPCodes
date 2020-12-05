#include<iostream>
using namespace std;
#define MAX 101
int n,m, a,b;
int rows[MAX],columns[MAX];
int tablero[MAX][MAX];

void vertical(){
    for(int i=0; i<n; i++){
        if(tablero[i][m]<0){
            rows[a++]=i+1;
            for(int j=0; j<m; j++) tablero[i][j]*=-1;
        }
    }
    for(int j=0; j<m; j++) {
        tablero[n][j]=0;
        for(int i=0; i<n; i++) tablero[n][j]+=tablero[i][j];
    }
}
void horizontal(){
    for(int j=0; j<m; j++){
        if(tablero[n][j]<0){
            columns[b++]=j+1;
            for(int i=0; i<n; i++) tablero[i][j]*=-1;
        }
    }
    for(int i=0; i<n; i++) {
        tablero[i][m]=0;
        for(int j=0; j<m; j++) tablero[i][m]+=tablero[i][j];
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<n; i++) for(int j=0; j<m; tablero[i][m]+=tablero[i][j++]) cin>>tablero[i][j];
    for(int i=0;i<9;i++){
        vertical();
        horizontal();
    }
    cout<<a;
    for(int i=0;i<a;i++) cout<<" "<<rows[i];
    cout<<"\n"<<b;
    for(int i=0;i<b;i++) cout<<" "<<columns[i];
}
