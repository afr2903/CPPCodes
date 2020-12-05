#include<iostream>
#include<cstring>
using namespace std;
string w;
int main(){
    cin>>w;
    for(int i=0; i<w.size(); i++){
        if(w[i]<'a') w[i]=w[i]-'A'+'a';
        if(w[i]=='a' ||w[i]=='e' ||w[i]=='i' ||w[i]=='o' ||w[i]=='u' ||w[i]=='y')continue;
        cout<<"."<<w[i];
    }
}
