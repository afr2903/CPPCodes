#include<iostream>
#include<string>
using namespace std;
string w;
int letras[26];
int main(){
    int m=0,a;
    cin>>w;
    for(int i=0;i<w.size();i++){
        a=w[i]-'a'+1;
        letras[a]++;
        if(letras[a]>m)m=letras[a];
    }
    cout<<w.size()-m;
}
