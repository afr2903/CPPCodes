#include<iostream>
#include<string>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s.size()<=10)cout<<s<<"\n";
        else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
    }
}
