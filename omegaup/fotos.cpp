#include<iostream>
using namespace std;
int r,c,k;
char savanna[501][501];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>r>>c>>k;
    for(int i=1; i<=r; i++) for(int j=1; j<=c; j++) cin>>savanna[i][j];
}
