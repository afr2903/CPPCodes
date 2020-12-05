#include<iostream>
#include<string>
using namespace std;
string p;
int main(){
    getline(cin,p,'\n');
    int i,f;
    for(i=0,f=p.size()-1;i<f;i++,f--){
        if(p[i]!=p[f]){
            cout<<"Falso";
            return 0;
        }
    }
    cout<<"Cierto";
}
