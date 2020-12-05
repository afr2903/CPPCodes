#include<bits/stdc++.h>
using namespace std;
int l[500][500];
int f,c,b,r,m,n;
int buscar(int y,int x,int r){
    if(y<0||x<0||y>=f||x>=c)return r;
    if(l[y][x]>0){
        r+=l[y][x];
        l[y][x]=0;
        r=buscar(y-1,x,r);
        r=buscar(y,x-1,r);
        r=buscar(y+1,x,r);
        r=buscar(y,x+1,r);
    }
    return r;
}
int main(){
    cin>>f>>c;
    for(int i=0;i<f;i++)for(int j=0;j<c;j++)cin>>l[i][j];
    for(int j=0;j<c;j++){
        for(int i=0;i<f;i++){
            if(l[i][j]!=0){
                r=buscar(i,j,0),b++;
                if(r>m)m=r,n=b;
            }
        }
    }
    cout<<n<<" "<<m;
}
