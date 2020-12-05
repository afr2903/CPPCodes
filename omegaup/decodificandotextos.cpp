#include<iostream>
#include<string>
using namespace std;
string w;
int main(){
    char a;
    int n,i=1;
    while(true){
        cin>>n;
        a=n/i;
        w+=a;
        i++;
        a=cin.get();
        if(a=='-')w+=' ';
        if(a=='\n')break;
    }
    cout<<w;
}
