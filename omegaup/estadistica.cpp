#include<iostream>
#include<algorithm>
#define MAX 1000005
using namespace std;
int n, m, aux, s[MAX];
unsigned long long ans;
bool v[MAX], first = false;
int lft[MAX], rgt[MAX];

int xd(int a, int b){
    if(a>b) swap(a,b);
    if(rgt[a]<b) return rgt[a];
    if(!lft[a]) return rgt[a];
    if(!rgt[b]) return lft[b];
    if( a-lft[a] < rgt[b]-b ) return lft[a];
    return rgt[b];
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>s[i];
        if(s[i]){
            aux = s[i];
            if(!first) s[0] = s[i], first = true;
        }
    }
    s[n+1] = aux;
    for(int i=1; i<=m; i++,v[aux]=true) cin>>aux;
    if(!first){
        cout<<"0\n";
        for(int i=1; i<=n; i++) cout<<aux<<" ";
        return 0;
    }

    for(int i=1; i<MAX; i++){
        if(v[i]) lft[i] = i;
        else lft[i] = lft[i-1];
    }
    for(int i=MAX-2; i>=0; i--){
        if(v[i]) rgt[i] = i;
        else rgt[i] = rgt[i+1];
    }
    /*for(int i=0; i<=n+1; i++) cout<<s[i]<<" ";
    cout<<"\n";
    for(int i=1; i<=20; i++) cout<<lft[i]<<" ";
    cout<<"\n";
    for(int i=1; i<=20; i++) cout<<rgt[i]<<" ";*/

    for(int i=1,j; i<=n; i++){
        if(s[i]) continue;
        for(j=i+1; !s[j]; j++);
        ans = xd(s[i-1], s[j]);
        fill(s+i, s+j, ans);
    }
    ans = 0;
    for(int i=2; i<=n; i++) ans += abs( s[i]-s[i-1] );
    cout<<ans<<"\n";
    for(int i=1; i<=n; i++) cout<<s[i]<<" ";
}
