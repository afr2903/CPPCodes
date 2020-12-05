/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: shell
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ofstream fout ("shell.out");
ifstream fin ("shell.in");

int n, a,b,q, m;
int shell[]={0,1,2,3};
int points[4];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>n;
    for(int i=1; i<=n; i++){
        fin>>a>>b>>q;
        swap(shell[a],shell[b]);
        for(int j=1; j<=3; j++){
            if(shell[q]==j)points[j]++;
        }
    }
    for(int j=1; j<=3; j++) m=max(points[j],m);
    fout<<m;
}

