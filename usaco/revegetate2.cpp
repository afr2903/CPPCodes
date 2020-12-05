
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
#include<vector>
#define MAX 101
using namespace std;
ofstream fout ("revegetate.out");
ifstream fin ("revegetate.in");
int n, m;
pair<int,int> cow;
vector<int>pasture[MAX];
int ans[MAX];
bool c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>n>>m;
    for(int i=1; i<=m; i++){
        fin>>cow.first>>cow.second;
        if(cow.first>cow.second) swap(cow.first, cow.second);
        pasture[cow.second].push_back(cow.first);
    }
    for(int i=1; i<=n; i++){
        for(int k=1; k<=4; k++){
            c=0;
            for(int j=0; j<pasture[i].size(); j++) if(ans[pasture[i][j]]==k) c=1;
            if(c)continue;
            ans[i]=k;
            break;
        }
    }
    for(int i=1; i<=n; i++) fout<<ans[i];
}

