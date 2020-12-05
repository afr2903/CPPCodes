#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>20){
        return 0;
    }
    if(a<0){
        return 0;
    }
    for(int b=1; b<=a; b++){
        cout<<"*";
    }
}
