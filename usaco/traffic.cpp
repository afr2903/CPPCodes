/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: afr2903
TASK: traffic
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#define MAX 101
using namespace std;
ofstream fout ("traffic.out");
ifstream fin ("traffic.in");
int n;
struct mile{
    string instruct;
    int l,r=2000;
}road[MAX], traffic[MAX];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    fin>>n;
    for(int i=1; i<=n; i++){
        fin>>road[i].instruct>>road[i].l>>road[i].r;
        if(road[i].l>road[i].r) swap(road[i].l, road[i].r);
    }
    int i=n;
    while(road[i].instruct!="none")i--;
    for(; i>0; i--){
        if(road[i].instruct=="none"){
            traffic[i].l= max(road[i].l, traffic[i+1].l);
            traffic[i].r= min(road[i].r, traffic[i+1].r);
        }
        if(road[i].instruct=="off"){
            traffic[i].l= traffic[i+1].l+road[i].r;
            traffic[i].r= traffic[i+1].r+road[i].l;
        }
        if(road[i].instruct=="on"){
            traffic[i].l= traffic[i+1].l-road[i].l;
            traffic[i].r= traffic[i+1].r-road[i].r;
        }
    }
    fout<<traffic[1].l<<" "<<traffic[1].r<<"\n";
    for(i=1; i<=n; i++){
        if(road[i].instruct=="none"){
            traffic[i].l= max(road[i].l, traffic[i-1].l);
            traffic[i].r= min(road[i].r, traffic[i-1].r);
        }
        if(road[i].instruct=="off"){
            traffic[i].l= traffic[i-1].l-road[i].r;
            traffic[i].r= traffic[i-1].r-road[i].l;
        }
        if(road[i].instruct=="on"){
            traffic[i].l= traffic[i-1].l+road[i].l;
            traffic[i].r= traffic[i-1].r+road[i].r;
        }
    }
    fout<<traffic[n].l<<" "<<traffic[n].r<<"\n";
}

