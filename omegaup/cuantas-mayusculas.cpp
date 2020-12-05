#include<iostream>
#include<string>
using namespace std;
string w;
int main(){
    int m=0;
    cin>>w;
    for(int i=0; i<w.size(); i++) if(w[i]<'a') m++;
    cout<<w.size()-m<<" "<<m;
}
