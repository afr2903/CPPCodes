
/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: herding
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include<algorithm>
using namespace std;
ofstream fout ("herding.out");
ifstream fin ("herding.in");
int a[3], mi, ma;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    ma= max(a[2]-a[1], a[1]-a[0]);
    mi= min(a[2]-a[1], a[1]-a[0]);
    if(mi==1 && ma==1) fout<<0<<"\n"<<0;
    else{
        if(mi==2 || ma==2) fout<<1<<"\n";
        else fout<<2<<"\n";
        fout<<ma-1;
    }
}
