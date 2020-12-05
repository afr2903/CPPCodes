#include<iostream>
#include<queue>
using namespace std;
#define MAX 1001
struct rover{
    int x,y,t;
}current, nuevo;

int n, m, k, xf, yf;
int movx[11], movy[11];
bool seen[MAX][MAX];
queue<rover>q;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    cin>>current.x>>current.y>>xf>>yf;
    for(int i=1; i<=k; i++) cin>>movx[i]>>movy[i];
    current.t=0;
    q.push(current);
    seen[current.y][current.x]=1;

    while(!q.empty()){
        current=q.front();
        for(int i=1; i<=k; i++){
            nuevo.t= current.t+1;
            nuevo.x= current.x+movx[i];
            nuevo.y= current.y+movy[i];
            if(nuevo.x>m || nuevo.y>n || nuevo.x<=0 || nuevo.y<=0) continue;
            if(nuevo.y==yf && nuevo.x==xf){
                cout<<nuevo.t;
                return 0;
            }
            if(seen[nuevo.y][nuevo.x]) continue;
            seen[nuevo.y][nuevo.x]=1;
            q.push(nuevo);
        }
        q.pop();
    }
    cout<<"-1";
}
