/*
ID: afr10291
PROG: beads
LANG: C++
*/

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
ifstream fin("beads.in");
ofstream fout("beads.out");

int n;
vector<char>necklace;
vector<int>beads;

void compress(){
    for(int i=n-1; i>=0; i--){
        if(necklace[i] == necklace[i-1]){
            beads[i-1]+= beads[i], n--;
            necklace.erase(necklace.begin()+i);
            beads.erase(beads.begin()+i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    char c;
    for(int i=0; i<n; i++){
        cin>>c;
        necklace.push_back(c);
        beads.push_back(1);
    }
    compress();
    for(int i=0; i<n; i++) cout<<necklace[i];
    cout<<"\n";
    for(int i=0; i<n; i++) cout<<beads[i];
}
