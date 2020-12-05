#include<iostream>
#include<string>
using namespace std;
string username;
bool letter[26];
int distinct=0;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>username;
    for(int i=0; i<username.size(); i++){
        if(!letter[username[i]-'a']){
            letter[username[i]-'a']=1;
            distinct++;
        }
    }
    if(distinct%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
}
