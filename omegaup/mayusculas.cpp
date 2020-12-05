#include<bits/stdc++.h>
using namespace std;
string w;
int main(){
    char a;
    getline(cin,w,'\n');
    for(int i=0;i<w.size();i++){
        if(w[i]>='a'&&w[i]<='z'){
            a=w[i]-('a'-'A');
            cout<<a;
        }
        else cout<<w[i];
    }
}
