#include<iostream>
#define MAX 100001
using namespace std;
int n, m, mn=MAX, mx;
int a[11], b[11];
bool c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=m; i++) cin>>b[i];

    for(int i=1; i<=n; i++) mx= max(mx, a[i]);
    for(int i=1; i<=m; i++) mn= min(mn, b[i]);
    swap(mn, mx);

    for(int x=mn; x<=mx; x++){
        c=1;
        for(int i=1; i<=n; i++){
            if(x%a[i]==0)continue;
            c=0;
            break;
        }
        if(!c)continue;
        for(int i=1; i<=m; i++){
            if(b[i]%x==0)continue;
            c=0;
            break;
        }
        if(!c)continue;
        cout<<x<<" ";
    }
}
