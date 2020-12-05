/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: revegetate
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include<set>
#include <string>
#include<cmath>
#define MAX 101
using namespace std;
ofstream fout ("revegetate.out");
ifstream fin ("revegetate.in");
int n, m;
set< pair<int,int> > pasture;
set< pair<int,int> >::iterator it;
pair<int,int> cow;
int bitmask[MAX];
int vis[MAX];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>n>>m;
    for(int i=1; i<=m; i++){
        fin>>cow.first>>cow.second;
        if(cow.first>cow.second) swap(cow.first, cow.second);
        pasture.insert(cow);
    }
    it=pasture.begin();
    for(;it!=pasture.end(); it++){
        cow=*it;
        int u=cow.first, v=cow.second;
        if(!vis[u]){
            bitmask[u]^= 15;
            vis[u]= log(bitmask[u]&(-bitmask[u]))/log(2) +1;
            bitmask[u]-= bitmask[u]&(-bitmask[u]);
            bitmask[u]^= 15;
            //vis[u]=1;
        }
        bitmask[v]|= bitmask[u];
    }
    for(int i=1; i<=n; i++){
        if(vis[i]){
            fout<<vis[i];
            continue;
        }
        for(int j=0; j<=3; j++){
            if(bitmask[i]&(1<<j)) continue;
            fout<<j+1;
            break;
        }
    }
}

