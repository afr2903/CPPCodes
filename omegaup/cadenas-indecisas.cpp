#include<iostream>
using namespace std;
string word;
bool mayus;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>word;
    for(int i=0; i<word.size(); i++){
        if(word[i]=='*') mayus=!mayus;
        else{
            if(mayus) word[i]-='a'-'A';
            cout<<word[i];
        }
    }
}
