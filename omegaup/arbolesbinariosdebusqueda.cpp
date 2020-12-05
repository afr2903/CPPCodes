#include<iostream>
using namespace std;
#define MAX 300001
int nodo[MAX], izq[MAX], der[MAX];
int n,c=1,i;

void insertar(int x){
    c++;
    if(nodo[i]<nodo[x]){
        if(izq[x]==0)izq[x]=i;
        else insertar(izq[x]);
    } else {
        if(der[x]==0)der[x]=i;
        else insertar(der[x]);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>nodo[1];
    cout<<"0\n";
    for(i=2;i<=n;i++){
        cout<<c<<"\n";
        cin>>nodo[i];
        insertar(1);
    }
}
