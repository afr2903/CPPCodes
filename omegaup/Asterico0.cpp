#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>100){
        return 0;
    }
    if(a<1){
        return 0;
    }
    int c;
    c=a;
    for(int b=1; b<=c; b++){
        if(b>1){
            cout<<"\n";
        }
        for(int b=1; b<=a; b++){
            cout<<"*";
        }
    }
}
