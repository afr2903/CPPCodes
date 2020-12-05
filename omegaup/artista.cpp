#include<iostream>
using namespace std;
int cartulina[201][201][501];
int m,n,g,c,k,ci,mi,ni,xi,yi;
int grosor[201][201];
void papel(){
    cin>>ci>>mi>>ni>>xi>>yi;
    xi--,yi--;
    for(int i=0;i<ni;i++,yi++){
        for(int j=0,x=xi;j<mi;j++,x++){
            if(ci==-1)grosor[yi][x]--;
            else{
                if(grosor[yi][x]<-1)grosor[yi][x]=-1;
                cartulina[yi][x][++grosor[yi][x]]=ci;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<cartulina[i][j][grosor[yi][xi]-1]<<" ";
        cout<<"\n";
    }*/
}
int main(){
    cin>>m>>n>>g>>c>>k;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)grosor[i][j]=g-1;
    for(int i=0;i<k;i++)papel();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grosor[i][j]<g){
                if(grosor[i][j]<0)cout<<"-1"<<" ";
                else if(cartulina[i][j][grosor[i][j]]!=0)cout<<cartulina[i][j][grosor[i][j]]<<" ";
                else cout<<c<<" ";
            }
            else cout<<cartulina[i][j][grosor[i][j]]<<" ";
        }
        cout<<"\n";
    }
    /*cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<grosor[i][j]<<" ";
        cout<<"\n";
    }*/
}


