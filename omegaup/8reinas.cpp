#include<bits/stdc++.h>
using namespace std;
bool c=0;
int row[9];
bool column[9];
bool check(int y,int x){
    int o,t;
    for(int i=1;i<=8;i++){
        if(row[i]==0)continue;
        o=y-i;
        if(o<0)o*=-1;
        t=x-row[i];
        if(t<0)t*=-1;
        if(o==t)return 0;
    }
    return 1;
}
bool chess(int i){
    if(i==9){
        for(int j=1;j<=8;j++)cout<<j<<" "<<row[j]<<"\n";
        c=1;
        return 1;
    }
    if(row[i]!=0){
        if(chess(i+1))return 1;
        return 0;
    }
    for(int j=1;j<=8;j++){
        //cout<<i<<" "<<j<<"\n";
        if(column[j])continue;
        if(check(i,j)){
            row[i]=j;
            column[j]=1;
            if(chess(i+1))return 1;
            row[i]=0;
            column[j]=0;
        }
    }
    return 0;
}
int main(){
    int n,i;
    bool b;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>i;
        cin>>row[i];
        column[row[i]]=1;
    }
    chess(1);
    if(!c)cout<<"0";
}
