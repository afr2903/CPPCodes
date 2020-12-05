#include<iostream>
using namespace std;
char pila[20];
//NO SIRVE :"v
int main(){
    int n,s=0;
    char a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=='('||a=='['||a=='{'){
            pila[s]==a;
            s++;
        }
        if(a==')'||a==']'||a=='}'){
            if(pila[s-1]==a-1||pila[s-1]==a-2)pila[s--]=0;
            else{
                cout<<"NELSON MANDELA";
                return 0;
            }
        }
    }
    if(pila[0]!=0)cout<<"NELSON MANDELA";
    else cout<<"ZIZTEM APERIO";
}
