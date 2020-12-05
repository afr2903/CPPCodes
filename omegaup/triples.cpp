#include<iostream>
#define MAX 50001
using namespace std;
int n, c, l[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>l[i];
    for(int i=1; i<=n; i++) if(l[i]%3==0)c++;
    if(!c) cout<<"No hay triples.";
    else{
        cout<<c<<"\n";
        for(int i=1; i<=n; i++) if(l[i]%3==0)cout<<i<<" ";
    }
}
