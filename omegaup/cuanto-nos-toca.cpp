#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100001
int n,a,s;
int c[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>a;
    for(int i=0;i<n;i++){
        cin>>c[i];
        s+=c[i];
    }
    sort(c,c+n);
    if(a<=n)cout<<c[n-a];
    else cout<<s/a;
}
