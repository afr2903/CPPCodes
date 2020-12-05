/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: backforth
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#define MAX 13
using namespace std;

ofstream fout ("backforth.out");
ifstream fin ("backforth.in");

int b1[MAX], b2[MAX];
int t1, t2,  ai, aj;
set<int>results;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=1; i<=10; i++) fin>>b1[i];
    for(int i=1; i<=10; i++) fin>>b2[i];

    for(int i=1; i<=10; i++){//Tuesday
        t1=1000, t2=1000;
        t1-=b1[i];
        ai=b1[i];
        b2[11]=b1[i], b1[i]=0;
        for(int j=1; j<=11; j++){//Wednesday
            t1+=b2[j];
            aj=b2[j];
            b1[11]=b2[j], b2[j]=0;
            for(int k=1; k<=11; k++){//Thursday
                if(!b1[k])continue;
                t1-=b1[k];
                b2[12]=b1[k];
                for(int l=1; l<=12; l++){//Friday
                    if(!b2[l])continue;
                    t1+=b2[l];
                    results.insert(t1);
                    //cout<<t1<<" ";
                    t1-=b2[l];
                }
                t1+=b1[k];
            }
            t1-=aj;
        }
        t1+=ai;
    }
    fout<<results.size();
}

