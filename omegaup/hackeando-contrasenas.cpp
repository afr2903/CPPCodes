#include<iostream>
#include<string>
using namespace std;

string s;
int m[26];
unsigned long int n,k=1,r;
void factorial(int a){
    r=1;
    for(;a>1;a--)r*=a;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>s;
    factorial(s.size());
    n=r;
    for(int i=0; i<s.size(); i++)m[s[i]-'a']++;
    //for(int i=0; i<26; i++)cout<<m[i]<<" ";
    for(int i=0; i<26; i++){
        if(m[i]==0||m[i]==1)continue;
        factorial(m[i]);
        k*=r;
    }
    cout<<n/k;
}
