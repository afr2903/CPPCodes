#include<iostream>
using namespace std;
#define MAX 1000002
struct  s{
    char c;
    int p;
}pila[MAX];
int n, j, i, l=MAX, m=MAX;
char c;
int seen[3];
char symbol[2][3]={'(','[','{', ')',']','}'};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    c=cin.get();
    for(i=1; i<=n; i++){
        c=cin.get();
        for(int k=0; k<3; k++) if(c==symbol[0][k]) pila[++j]={c,i};
        for(int k=0; k<3; k++){
            if(c==symbol[1][k]){
                if(pila[j].c==symbol[0][k]) j--;
                else pila[++j]={c,i};
            }
        }
    }
    //for(int i=1; i<=j; i++) cout<<pila[i].c<<" "<<pila[i].p<<"\n";
    for(i=1; i<=j; i++){
        for(int k=0; k<3; k++) if(pila[i].c==symbol[0][k]) seen[k]++;
        for(int k=0; k<3; k++) if(pila[i].c==symbol[1][k]) seen[k]--;
        if(seen[0]<0 || seen[1]<0 || seen[2]<0){
            m=i;
            break;
        }
    }
    seen[0]=0, seen[1]=0, seen[2]=0;
    for(i=j; i>0; i--){
        for(int k=0; k<3; k++) if(pila[i].c==symbol[0][k]) seen[k]++;
        for(int k=0; k<3; k++) if(pila[i].c==symbol[1][k]) seen[k]--;
        if(seen[0]>0) l=i, seen[0]=0;
        if(seen[1]>0) l=i, seen[1]=0;
        if(seen[2]>0) l=i, seen[2]=0;
    }
    m=min(m,l);
    for(i=1; i<=j; i++){
        if(pila[i].c==symbol[1][0] && pila[i-1].c!=symbol[0][0]){
            l=i;
            break;
        }
        if(pila[i].c==symbol[1][1] && pila[i-1].c!=symbol[0][1]){
            l=i;
            break;
        }
        if(pila[i].c==symbol[1][2] && pila[i-1].c!=symbol[0][2]){
            l=i;
            break;
        }
    }
    m=min(m,l);
    if(j==0)cout<<0;
    else cout<<pila[m].p;
}

/*
24
{([a+b]) + c] {(2 + 2)}}

16
(a + b) + (c [ )

18
a(b + c { d / h )}

20
a(b + c * { d / h )}
*/
