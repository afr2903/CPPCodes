#include<iostream>
#include<string>
using namespace std;
string word;
void caps_lock(){
    for(int i=1; i<word.size(); i++) if(word[i]>'Z')return;
    if(word[0]>'Z') word[0]-='a'-'A';
    else word[0]+='a'-'A';
    for(int i=1; i<word.size(); i++) word[i]+='a'-'A';
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>word;
    caps_lock();
    cout<<word;
}
