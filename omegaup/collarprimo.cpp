#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 40

bool prime[MAX];
int n,c;
vector<int>ady[MAX];
bool visited[MAX];

void criba(int m){
    for(int i=2;i*i<=m;i++){
        if(prime[i])continue;
        for(int j=i*i;j<=m;j+=i)prime[j]=1;
    }

}
void adyacencia(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)continue;
            if(prime[i+j])continue;
            ady[i].push_back(j);
        }
    }
}
void collar(int current,int lenght){
    if(lenght==n){
        if(!prime[current+1])c++;
        return;
    }
    for(int i=0; i<ady[current].size(); i++){
        if(visited[ ady[current][i] ])continue;
        visited[ady[current][i]] = 1;
        collar(ady[current][i],lenght+1);
        visited[ady[current][i]] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    if(n%2!=0){
        cout<<0;
        return 0;
    }
    visited[1]=1;
    criba(n+n-1);
    adyacencia();
    /*for(int i=0;i<=n;i++){
        for(int j=0;j<ady[i].size();j++)cout<<ady[i][j]<<" ";
        cout<<"\n";
    }*/
    collar(1,1);
    cout<<c;
}
