#include<iostream>
using namespace std;
int f,c;
int m[51][51];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>f>>c;
    for(int i=1; i<=f; i++) for(int j=1; j<=c; j++) cin>>m[i][j];
    for(int i=f; i>=1; i--){
        for(int j=1; j<=c; j++) cout<<m[i][j]<<" ";
        cout<<"\n";
    }
}
