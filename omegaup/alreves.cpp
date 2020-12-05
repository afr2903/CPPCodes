#include<bits/stdc++.h>
using namespace std;
string w;
int main(){
    getline(cin,w,'\n');
    for(int i=0;i<w.size();i+=2){
        if(w[i]=='0')cout<<"1 ";
        else cout<<"0 ";
    }
}
