#include<iostream>
using namespace std;
int times[26];
int main(){
    int n,m=0;
    char c;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>c;
        if(++times[c-'a'] > times[m]) m=c-'a';
    }
    c=m+'a';
    cout<<c;
}
