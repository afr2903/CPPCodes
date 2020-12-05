#include<iostream>
using namespace std;
#define MAX 16
unsigned long long int ans;
int n;
bool diagonal[MAX], inversa[MAX];
bool tablero[9][9];
void combi(int alf, int y, int x){
    if(alf==0){
        ans++;
        return;
    }
    for(int i=y; i<=n; i++){
        for(int j=x; j<=n; j++){
            //cout<<i<<" "<<j<<"  "<<alf<<"\n";
            if(tablero[i][j])continue;
            int dn=i+j-1;
            if(diagonal[dn])continue;
            int di=i+((j-n-1)*-1)-1;
            if(inversa[di])continue;
            //cout<<i<<" "<<j<<"  "<<dn<<" "<<di<<"  "<<alf<<"\n";
            tablero[i][j]=1, diagonal[dn]=1, inversa[di]=1;
            combi(alf-1,i,j+1);
            tablero[i][j]=0, diagonal[dn]=0, inversa[di]=0;
        }
        x=1;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int k;
    cin>>n>>k;
    if(k<=2*n-1)combi(k,1,1);
    cout<<ans;
}
