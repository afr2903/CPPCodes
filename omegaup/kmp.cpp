#include<iostream>
#define MAX 1000
using namespace std;
string patron, palabra;
int pre[MAX];
void precalculo(){
    for(int i=0, j=1; j<patron.size(); j++){
        if(patron[i]==patron[j]){
            pre[j]=pre[j-1]+1;
            i++;
        }
    }
}
void kmp(){
    for(int i=0, j=0; j<palabra.size(); j++){
        if(patron[i]==palabra[j]) i++;
        if
    }
}
int main(){
    //cin>>palabra;
    cin>>patron;
    precalculo();
    for(int i=0; i<patron.size(); i++) cout<<pre[i];
}
