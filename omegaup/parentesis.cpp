#include<iostream>
#include<string>
using namespace std;
string w;
int main(){
    int p=0;
    cin>>w;
    for(int i=0;i<w.size();i++){
        if(w[i]=='(')p++;
        if(w[i]==')')p--;
    }
    if(p!=0)cout<<"NO";
    else cout<<"SI";
}
