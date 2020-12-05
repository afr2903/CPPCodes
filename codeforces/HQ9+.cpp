#include<iostream>
#include<string>
using namespace std;
string program;
bool analize(){
    for(int i=0; i<program.size(); i++) if(program[i]=='H'||program[i]=='Q'||program[i]=='9') return 1;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>program;
    if(analize()) cout<<"YES";
    else cout<<"NO";
}
