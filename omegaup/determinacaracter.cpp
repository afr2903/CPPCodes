#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>64&&c<91)cout<<"MAYUSCULA";
    else if(c>96&&c<123)cout<<"MINUSCULA";
    else cout<<"OTRO";
}
