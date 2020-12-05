#include<iostream>
using namespace std;
int main(){
    int n,p=0;
    bool b=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=i/2;j++){
            if(i%j==0)b=1;
        }
        if(b==0)p++;
        b=0;
    }
    if(p==0)cout<<"No existen numeros primos en la cantidad ingresada.";
    else cout<<p;
}
