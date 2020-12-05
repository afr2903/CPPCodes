#include<iostream>
using namespace std;
string w,a,b;
int main(){
    bool x=1;
    getline(cin,w,'\n');
    for(int i=0;i<w.size();i++){
        if(w[i]=='[')x=0;
        else if(w[i]==']')x=1;
        else{
            for(;w[i]!='[' && w[i]!=']' && i!=w.size(); i++) b+=w[i];
            if(x)a=a+b;
            else a=b+a;
            b.clear();
            if(i!=w.size())i--;
        }
    }
    cout<<a;
}
