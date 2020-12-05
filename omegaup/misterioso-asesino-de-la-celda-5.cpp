#include<iostream>
using namespace std;
#define MAX 101
int l, a, n, x, y, c=0;
bool m[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>l>>a>>n;
    for(int i=1; i<=n; i++){
        cin>>y>>x;
        m[y][x] = true;
    }
    for(int i=1; i<l; i++) for(int j=1; j<a; j++) c += ( !m[i][j] && !m[i+1][j] && !m[i][j+1] && !m[i+1][j+1] );
    cout<<c;
}
