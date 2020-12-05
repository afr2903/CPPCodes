#include<iostream>
#define MAX 200001
using namespace std;
int n, t, m;
int pila[MAX], parent[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>t>>m;
        if(m) pila[i]=m, parent[i]=t;
        else{
            cout<<pila[t]<<"\n";
            pila[i]=pila[parent[t]];
            parent[i]=parent[parent[t]];
        }
    }
}
