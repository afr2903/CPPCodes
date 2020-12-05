#include<iostream>
#include<string>
using namespace std;
string word;
char c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>c>>word;
    if(c>='a') c-='a'-'A';
    cout<<c<<word;
}

