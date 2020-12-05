#include<iostream>
using namespace std;
typedef unsigned long long ull;
bool t;
ull x, pot=1;
string s;
void word(){
    cin>>s;
    for(int i=s.size()-1; i>=0; i--, pot*=26)
        x+=(s[i]-'A'+1)*pot;
    cout<<x;
}
void number(){
    cin>>x;
    int mod;
    while(x){
        mod= x%26? x%26:26;
        s+=mod+'A'-1;
        x= (x-mod)/26;
    }
    for(int i=s.size()-1; i>=0; i--)
        cout<<s[i];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>t;
    if(t) word();
    else number();
}
