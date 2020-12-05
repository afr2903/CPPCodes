/*
ID: afr10291
PROG: ride
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string w1, w2;
int main(){
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    int comet=1, group=1;

    fin>>w1>>w2;
    for(int i=0; i<w1.size(); i++) comet*=(w1[i]-'A'+1);
    for(int i=0; i<w2.size(); i++) group*=(w2[i]-'A'+1);
    comet%=47, group%=47;
    if(comet==group) fout<<"GO\n";
    else fout<<"STAY\n";
    return 0;
}
