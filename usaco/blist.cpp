/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: blist
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#define MAX 1001

using namespace std;
ofstream fout ("blist.out");
ifstream fin ("blist.in");

int bucket[MAX];
bool visited[MAX];
int b[MAX];
int n, s, t, x;
int total, current;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>n;
    for(int i=1; i<=n; i++){
        fin>>s>>t>>b[i];
        bucket[s]=i, bucket[t]=i;
    }
    for(int i=1; i<=1000; i++){
        //cout<<"\n"<<i<<" "<<total<<" "<<available;
        if(!bucket[i]) continue;
        if(visited[bucket[i]]){
            current-=b[bucket[i]];
            continue;
        }
        visited[bucket[i]]=1;
        current+=b[bucket[i]];
        total= max(total,current);
    }
    fout<<total;
}

