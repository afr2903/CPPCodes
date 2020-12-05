#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=101,c,t=0;
    while(a<b){
        t++;
        c=(a+b)/2;
        if(n<c){
            b=c;
            cout<<"menor\n";
        }
        if(n>c){
            a=c;
            cout<<"mayor\n";
        }
        if(n==c){
            a=b;
            cout<<"intentos: ";
        }
    }
    cout<<t;
}
