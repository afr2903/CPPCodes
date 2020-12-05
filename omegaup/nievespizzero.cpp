#include<iostream>
using namespace std;
struct pizza{
    int d,v;
}pila[500001];
int f=0;
int main(){
    int n,q,a;
    cin>>n;
    pizza nueva;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==0)cout<<pila[f].v<<"\n";
        if(a==1){
            cin>>nueva.d;
            if(nueva.d>pila[f].d){
                int j;
                for(j=f-1;j>0;j--){
                    if(nueva.d<pila[j].d){
                        nueva.v=pila[j].v+1;
                        break;
                    }
                }
                if(j<=0)nueva.v=1;
            }
            else if(nueva.d==pila[f].d) nueva.v=pila[f].v;
            else nueva.v=pila[f].v+1;
            pila[++f]=nueva;
        }
        if(a==2){
            cin>>q;
            f-=q;
        }
    }
}
/*
5
1 5
1 3
0
1 4
*/
