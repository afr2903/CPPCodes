#include<iostream>
#include<vector>
#define MAX 100001
using namespace std;
vector<int>a;
int b[MAX*10];
int n, t;

bool luck(int x){
    int aux=x;
    while(aux){
        if(aux%10==4) return 0;
        aux/=10;
    }
    aux=x;
    bool three=0;
    while(aux){
        if(three) if(aux%10==1) return 0;
        three=0;
        if(aux%10==3) three=1;
        aux/=10;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    //if(n>=100) return 0;
    int x=1;
    for(; a.size()<=MAX; x++){
        if(luck(x)){
            a.push_back(x);
            b[x]=a.size();
        }
        else b[x]=-1;
    }
    for(int i=1; i<=n; i++){
        cin>>t>>x;
        if(t==1) cout<<b[x]<<"\n";
        if(t==2) cout<<a[x-1]<<"\n";
    }
}
