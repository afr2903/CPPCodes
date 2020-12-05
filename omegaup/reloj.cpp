#include<iostream>
using namespace std;
int main(){
    int h,m,s;
    char c;
    cin>>h>>c>>m>>c>>s;
    ++s%=60;
    if(!s)++m%=60;
    if(!m&&!s)++h%=24;
    if(h<10) cout<<0;
    cout<<h<<c;
    if(m<10) cout<<0;
    cout<<m<<c;
    if(s<10) cout<<0;
    cout<<s;
}
