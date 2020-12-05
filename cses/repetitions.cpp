#include<iostream>
using namespace std;
string dna;
int ans, rep;
char last;
int main(){
    cin>>dna;
    for(auto x:dna){
        if(x==last) rep++;
        else last = x, ans = max(ans, rep), rep = 1;
    }
    cout<<max(ans, rep);
}
