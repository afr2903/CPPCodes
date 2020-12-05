#include<bits/stdc++.h>
using namespace std;
#define MAX 51
struct p{
    bool s,e,n,w;
}castle[MAX][MAX];
int r,c,k=3,q,m,ca,xm,ym,s;
char d;
bool b[4];
int checked[MAX][MAX];
bool visited[MAX][MAX];
int cuarto[MAX];
void binary(int a){
    if(a<1){
        for(int i=k;i>=0;i--)b[i]=0;
        return;
    }
    k--;
    binary(a/2);
    b[++k]=a%2;
}
void room(int y,int x){
    //cout<<y<<" "<<x<<"\n";
    if(y<0||x<0||y==r||x==c)return;
    if(checked[y][x]!=0)return;
    ca++,checked[y][x]=q;
    if(!castle[y][x].e)room(y,x+1);
    if(!castle[y][x].s)room(y+1,x);
    if(!castle[y][x].n)room(y-1,x);
    if(!castle[y][x].w)room(y,x-1);
}
int main(){
    int a;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++,k=3){
            cin>>a;
            binary(a);
            castle[i][j]={b[0],b[1],b[2],b[3]};
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(checked[i][j]==0){
                q++;
                room(i,j);
                if(ca>m)m=ca;
                cuarto[q]=ca,ca=0;
            }
        }
    }
    cout<<q<<" "<<m<<"\n";
    s=m;
    for(int i=0;i<r;i++){
        a=checked[i][0];
        for(int j=1;j<c;j++){
            if(checked[i][j]!=a){
                ca=cuarto[a]+cuarto[checked[i][j]];
                if(ca>s)s=ca,ym=i+1,xm=j+1,d='W';
                a=checked[i][j];
            }
        }
    }
    for(int j=0;j<c;j++){
        a=checked[0][j];
        for(int i=1;i<r;i++){
            if(checked[i][j]!=a){
                ca=cuarto[a]+cuarto[checked[i][j]];
                if(ca>s)s=ca,ym=i+1,xm=j+1,d='N';
                a=checked[i][j];
            }
        }
    }
    cout<<ym<<" "<<xm<<" "<<d;
}
