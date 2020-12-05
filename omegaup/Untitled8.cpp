#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    char x, y, z;
    cin>>x>>y>>z;
    int d;
    if (a>b){
        d=a;
        a=b;
        b=d;
    }
    if (b>c){
        d=b;
        b=c;
        c=d;
    }
    if (a>b){
        d=a;
        a=b;
        b=d;//swap
    }
    if(x==97){

    }
}
