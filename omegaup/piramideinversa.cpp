#include<iostream>
#include<string.h>
using namespace std;
string p;
int main(){
    getline(cin,p,'\n');
    for(int l=p.size()-1;l>=0;l--){
        for(int s=0;s<l;s++)cout<<" ";
        for(int i=l;i<p.size();i++)cout<<p[i];
        cout<<"\n";
    }
}
