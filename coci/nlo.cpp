#include<iostream>
#include<algorithm>
#include<cmath>
#define MAXN 100001
#define MAXK 101
using namespace std;
typedef unsigned long long ull;
int n,m,k;
ull sum, current;
int X, Y, R, cx, cy;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=1; i<=k; i++){
        cin>>X>>Y>>R;
        current=n*m;
        for(int y=1; y<=n; y++){
            for(int x=1; x<=m; x++){
                cx=abs(X-x), cy=abs(Y-y);
                if((cx*cx+cy*cy)<=R)current-=i;
            }
        }
        sum+=current;
    }
    cout<<sum;
}
