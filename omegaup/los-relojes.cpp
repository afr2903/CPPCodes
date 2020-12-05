#include<iostream>
#include<queue>
using namespace std;
struct st{
    int clock[9];
    string movs="";
}a,n,s;

bool seen[4][4][4][4][4][4][4][4][4];
int mov[9][9]=
//0,A,B,C,D,E,F,G,H,I
{{1,1,0,1,1,0,0,0,0},
 {1,1,1,0,0,0,0,0,0},
 {0,1,1,0,1,1,0,0,0},
 {1,0,0,1,0,0,1,0,0},
 {0,1,0,1,1,1,0,1,0},
 {0,0,1,0,0,1,0,0,1},
 {0,0,0,1,1,0,1,1,0},
 {0,0,0,0,0,0,1,1,1},
 {0,0,0,0,1,1,0,1,1}};
queue<st>q;

bool check(){
    for(int i=0; i<9; i++) if(n.clock[i]!=0)return 0;
    return 1;
}
void bfs(){
    q.push(a);
    for(int i=0; i<9; i++)s.clock[i]=0;
    while(!q.empty()){
        a=q.front();
        q.pop();
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++) n.clock[j]=(a.clock[j]+mov[i][j])%4;
            if(!seen[n.clock[0]][n.clock[1]][n.clock[2]][n.clock[3]][n.clock[4]][n.clock[5]][n.clock[6]][n.clock[7]][n.clock[8]]){
                seen[n.clock[0]][n.clock[1]][n.clock[2]][n.clock[3]][n.clock[4]][n.clock[5]][n.clock[6]][n.clock[7]][n.clock[8]]=1;
                n.movs=a.movs+((char)(i+'0'+1));
                if(check()){
                    for(int j=0; j<n.movs.size(); j++) cout<<n.movs[j]<<" ";
                    return;
                }
                q.push(n);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<9; i++){
        cin>>a.clock[i];
        a.clock[i]=(a.clock[i]/3)%4;
    }
    bfs();

}
