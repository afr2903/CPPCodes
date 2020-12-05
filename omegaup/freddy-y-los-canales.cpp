#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define MAX 100001
int n,m;
set<int>canal[MAX];
//bool canal[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    int a,b;
    char c;
    for(int i=1; i<n; i++){
        cin>>a>>b;
        canal[a].insert(b);
        canal[b].insert(a);
    }
    for(; m>0; m--){
        cin>>c>>a>>b;
    }

}
