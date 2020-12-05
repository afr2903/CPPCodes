#include<iostream>
#define MAX 2001
using namespace std;
int n,m;
char a[MAX][MAX];
bool b[55][55][55];
int diagonal[MAX][MAX];
long long ans=0;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin>>a[i][j];
    ans = n*m;
    if(n<=50&&m<=50){
        for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) b[i][j][1]=true;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i][j]==a[i-1][j]&&a[i][j]==a[i+1][j]&&a[i][j]==a[i][j-1]&&a[i][j]==a[i][j+1]) ans++, b[i][j][2]=true;
            }
        }
        for(int k=3; k<=min(n,m)/2; k++){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=m; j++){
                    if(b[i][j][k-1]&&b[i-1][j][k-1]&&b[i+1][j][k-1]&&b[i][j-1][k-1]&&b[i][j+1][k-1]) ans++, b[i][j][k]=true;
                }
            }
        }
        cout<<ans;
        return 0;
    }

    for(int k=n; k>=1; k--){
        for(int i=k, j=1; i>=1; i--, j++){
            diagonal[i][j]=1;
            if(a[i][j]==a[i-1][j-1]) diagonal[i][j]+= diagonal[i-1][j-1];
        }
    }
    for(int k=2; k<=m; k++){
        for(int j=k, i=1; j<=m; i--, j++){
            diagonal[i][j]=1;
            if(a[i][j]==a[i-1][j-1]) diagonal[i][j]+= diagonal[i-1][j-1];
        }
    }
    /*for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<diagonal[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    for(int k=m; k>=1; k--){
        bool st = true;
        int cnt = 0;
        int val = 0;
        for(int i=n,j=k; j<=m; i--,j++){
            if(st){
                if(!cnt){
                    if(diagonal[i][j]==1) continue;
                    val = diagonal[i][j];
                    cnt++;

                }
            }
        }
    }
    for(int k=n-1; k>=1; k--){
        for(int i=k,j=1; i>=1; i--,j++){
            if(diagonal[i][j]==1) continue;
        }
    }
    cout<<ans;
}
/*
7 8
dzdddaab
addddddz
addddddb
addddddd
addddddz
bzadddah
bsssdghj
*/
