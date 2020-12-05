#include<iostream>
#define MAX 1000
#define P 29
#define MOD 1000000007
using namespace std;
string word;
int ht[MAX], pot[MAX];
void precalculo(){

}
int main(){
    cin>>word;
    for(int i=1; i<word.size(); i++) pot[i]=(pot[i-1]*P)%MOD;
}
