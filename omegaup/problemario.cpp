#include<iostream>
using namespace std;
void uno(){
    float p,d;
    cout<<"Precio: ";
    cin>>p;
    cout<<"Descuento: ";
    cin>>d;
    d=d/100;
    d=p*d;
    cout<<p-d;
}
int main(){
    uno();
}
