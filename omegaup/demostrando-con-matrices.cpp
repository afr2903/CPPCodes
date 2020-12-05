#include<iostream>
using namespace std;
int n,m;
bool simetrica(){
    cin>>n;
    int matriz[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>matriz[i][j];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(matriz[i][j] != matriz[j][i]) return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    setlocale(LC_ALL, "");
    cin>>m;
    while(m--){
        if(simetrica())cout<<"Simétrica ";
        else cout<<"No Simétrica ";
    }
}
