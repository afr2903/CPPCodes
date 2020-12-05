#include<iostream>
#include<algorithm>
#define MAX 1000001
using namespace std;
int n, m, q=1;
int a[MAX], b[MAX], c[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) c[i]=b[i]-a[i];
    sort(c,c+n);
    //for(int i=0; i<n; i++) cout<<c[i]<<" ";
    for(int i=1; i<n; i++){
        if(c[i]==c[i-1])q++;
        else{
            m=max(m,q);
            q=1;
        }
    }
    m=max(m,q);
    cout<<m;
}
