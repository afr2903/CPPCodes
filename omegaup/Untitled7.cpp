#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int d;
    cin>>a;
    cin>>b;
    c=a+b;
    if (c>0){
        cout<<c;
    }
    else{
        d=c-(c+c);
        cout<<d;
    }
}

