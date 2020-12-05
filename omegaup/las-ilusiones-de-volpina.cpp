#include<iostream>
#define MAX 10000005
using namespace std;
int n, zeros=0;
int a[MAX];
long long int ans=1, aux;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(!a[i]) zeros++;
    }
    if(zeros>1){
        for(int i=1; i<=n; i++) cout<<"0 ";
        return 0;
    }
    for(int i=1; i<=n; i++) if(a[i]) ans*= a[i];
    if(!zeros) for(int i=1; i<=n; i++) cout<<ans/a[i]<<" ";
    else{
        for(int i=1; i<=n; i++){
            if(!a[i]) cout<<ans<<" ";
            else cout<<"0 ";
        }
    }
}
