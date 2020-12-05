#include<iostream>
using namespace std;
#define MAX 1000000
int n;
int hi[MAX], hf[MAX], b[MAX];
bool seen[MAX];
void play(int cb){
    for(int i=1; i<=n; i++){
        if(seen[i])continue;
        seen[i]=1;
        play();
        seen[i]=0;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>hi[i]>>hf[i]>>b[i];
}
