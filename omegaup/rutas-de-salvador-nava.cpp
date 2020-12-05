#include<iostream>
#include<queue>
#define MAX 100001
using namespace std;
struct xd{
    int id;
    int currL;
    int currR;
    int ansL;
    int ansR;
}a,s;
int n, x, m, l, r;
int maxAnsL, maxAnsR;
pair<int,int> rutas[MAX];
queue<xd>q;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>x>>m;
    a={0,x,x,x,x};
    q.push(a);
    for(int i=1; i<=m; i++){
        cin>>l>>r;
        rutas[i].first = l;
        rutas[i].second = r;
    }
    while(!q.empty()){
        a = q.front();
        q.pop();
        if(a.id==m){
            if( maxAnsR-maxAnsL+1<a.ansR-a.ansL+1 ){
                maxAnsL = a.ansL;
                maxAnsR = a.ansR;
            }
            continue;
        }
        s = a;
        s.id = a.id+1;
        l = rutas[s.id].first;
        r = rutas[s.id].second;
        if( l<=a.currL&&r>=a.currR ){
            s.currL = l;
            s.currR = r;
            s.ansL = min(a.ansL, l);
            s.ansR = max(a.ansR, r);
            q.push(s);
            continue;
        }
        q.push(s);
        if( (r<=a.currR&&r>=a.currL)||(l>=a.currL&&l<=a.currR) ){
            s.currL = l;
            s.currR = r;
            s.ansL = min(a.ansL, l);
            s.ansR = max(a.ansR, r);
            q.push(s);
        }
    }

    cout<<maxAnsR-maxAnsL+1;
}
