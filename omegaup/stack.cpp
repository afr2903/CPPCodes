#include<bits/stdc++.h>
using namespace std;
#define MAX 10
string pop(string *p,int &b){
    if(b==0)return "tin tin tin c ha detectado una amenaza :v";
    return p[--b];
}
void push(string *p,string e,int &b){
    if(b==MAX){
        cout<<"borra eso men es muy sad :'v"<<"\n";
        return;
    }
    p[b++]=e;
}
bool basio(string *p,int &i){
    if(p[i]=="")return 1;
    return 0;
}
int main(){
    string p[MAX];
    string e;
    int b=0,i=0;
    while(true){
        cin>>e;
        if(e=="pop")cout<<pop(p,b)<<"\n";
        else if(e=="empty"){
            cin>>i;
            cout<<basio(p,i);
        }
        else push(p,e,b);
    }
}
