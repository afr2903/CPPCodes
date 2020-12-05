#include<iostream>
#include<string>
using namespace std;
string o;
int q[4], last=1;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>o;
    for(int i=0; i<o.size(); i+=2){
        q[o[i]-'0']++;
        if(o[i]-'0'>last) last=o[i]-'0';
    }
    q[last]--;
    for(int i=1; i<=3; i++)
        for(;q[i]>0; q[i]--) cout<<i<<"+";
    cout<<last;
}
