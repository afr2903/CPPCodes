#include<iostream>
#include<string>
using namespace std;
string s;
char hello[]={'h','e','l','l','o'};
int j=0;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==hello[j]) j++;
        if(j==5)break;
    }
    if(j==5) cout<<"YES";
    else cout<<"NO";
}
