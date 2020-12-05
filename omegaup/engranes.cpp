#include<iostream>
using namespace std;
#define MAX 1000001
typedef long long ll;
ll m,l;
int n,k,t;
int a[MAX];
bool ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>l;
        ans=1;
        for(ll i=(l+m)%n; i!=l%n && ans==1; i=(i+m)%n)
            if(a[i]!=a[l%n]) ans=0;
        cout<<ans;
    }
}
