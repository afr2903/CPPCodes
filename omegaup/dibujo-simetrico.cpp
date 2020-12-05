#include<iostream>
#define MAX 1001
using namespace std;
int r, c;
char draw[MAX][MAX];
int main(){
    cin>>r>>c;
    for(int i=1; i<=r; i++) for(int j=1; j<=c; j++) cin>>draw[i][j];
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++) cout<<draw[i][j];
        for(int j=c; j>=1; j--) cout<<draw[i][j];
        cout<<"\n";
    }
    for(int i=r; i>=1; i--){
        for(int j=1; j<=c; j++) cout<<draw[i][j];
        for(int j=c; j>=1; j--) cout<<draw[i][j];
        cout<<"\n";
    }
}
