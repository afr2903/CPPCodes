#include<bits/stdc++.h>
using namespace std;
#define MAX 10
void push(string *p,string e,int &i,int &f){
    if(f==MAX&&i!=MAX)f=0;
    if(f+1==i){
        cout<<":v";
        return;
    }
    p[f++]=e;
}
string pop(string *p,int &i,int &f){
    if(i==MAX&&f!=MAX)i=0;
    if(i==f)return "tin tin tin c ha detectado una amenaza :v";
    return p[i++];
}
bool empti(string *p,int &b){
    if(p[b]=="")return 1;
    return 0;
}
int sise(string *p,int &i,int &f){
    if(i<=f)return f-i;
    else return MAX-i+f;
}
int main(){
    string p[MAX];
    string e;
    int b=0,i=0,f=0;
    while(true){
        cin>>e;
        if(e=="pop")cout<<pop(p,i,f)<<"\n";
        else if(e=="empty"){
            cin>>b;
            cout<<empti(p,b)<<"\n";
        }
        else if(e=="size"){
            cout<<sise(p,i,f);
        }
        else push(p,e,i,f);
    }
}
