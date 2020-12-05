/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: sleepy
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include<iostream>
#include<fstream>
#define MAX 101
using namespace std;
ofstream fout ("sleepy.out");
ifstream fin ("sleepy.in");

int cow[MAX];
int n;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>n;
    for(int i=1; i<=n; i++) fin>>cow[i];
    for(int i=n; i>1; i--){
        if(cow[i]<cow[i-1]){
            fout<<i-1;
            return 0;
        }
    }
    fout<<0;
}
