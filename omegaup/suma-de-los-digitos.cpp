#include<iostream>
using namespace std;
int s;
string n;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n.size(); i++) s+= n[i]-'0';
    cout<<s;
}
