/*
ID: afr2903
PROG: mixmilk
LANG: C++
*/

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
ifstream fin("mixmilk.in");
ofstream fout("mixmilk.out");

int m[3], c[3], x, y, r;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ofstream fout ("mixmilk.out");
    ifstream fin ("mixmilk.in");
    fin>>c[1]>>m[1];
    fin>>c[2]>>m[2];
    fin>>c[0]>>m[0];
    for(int i=1; i<=100; i++){
        x=i%3, y=(x+1)%3;
        r=m[x]-(c[y]-m[y]);
        if(r<=0) m[y]+=m[x], m[x]=0;
        else m[y]=c[y], m[x]=r;
    }
    fout<<m[1]<<"\n";
    fout<<m[2]<<"\n";
    fout<<m[0]<<"\n";
}
