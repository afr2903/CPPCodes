/*
ID: afr10291
PROG: gift1
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
ifstream fin("gift1.in");
ofstream fout("gift1.out");

#define MAX 11
string friends[MAX];
int accounts[MAX], NP;
int person(){
    string p;
    fin>>p;
    for(int j=1; j<=NP; j++) if(friends[j]==p) return j;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>NP;
    for(int i=1; i<=NP; i++) fin>>friends[i];
    for(int i=1; i<=NP; i++){
        int giver= person(), money, NG;
        fin>>money>>NG;
        if(!NG)continue;
        //accounts[giver]-=money;
        accounts[giver]+= -money+money%NG;
        money/=NG;
        for(;NG>0; NG--) accounts[person()]+=money;
    }
    for(int i=1; i<=NP; i++) fout<<friends[i]<<" "<<accounts[i]<<"\n";
}
