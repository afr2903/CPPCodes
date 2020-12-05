#include<iostream>
using namespace std;
#define MAX 101
int n,m,k,c, max_life, xi, yi;
char world[MAX][MAX];
int seen[MAX][MAX];
bool num[10];
void find(int x, int y, int life){
    if(x==0 || y==0 || x>m || y>n)return;
    if(world[y][x]=='#')return;
    if(world[y][x]=='S'){
        max_life=max(life,max_life);
        return;
    }
    int cl=0;
    if(world[y][x]>='0'&&world[y][x]<='9'){
        cl=world[y][x]-'0';
        if(num[cl])return;
        num[cl]=1;
    }
    life=life+(cl*c)-1;
    if(life==0)return;
    if(seen[y][x]>life)return;
    seen[y][x]=life;
    cout<<y<<" "<<x<<" "<<life<<"\n";
    find(x+1, y, life);
    find(x, y+1, life);
    find(x-1, y, life);
    find(x, y-1, life);
    if(cl)num[cl]=0;
    return;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie();
    cin>>n>>m>>k>>c;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>world[i][j];
            if(world[i][j]=='I')yi=i,xi=j;
        }
    }
    find(xi,yi,k);
    cout<<max_life;
    /*for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) cout<<seen[i][j]<<" ";
        cout<<"\n";
    }*/
}
