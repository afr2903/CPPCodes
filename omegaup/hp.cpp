#include <iostream>
using namespace std;
int main(){
    unsigned long long int d, t, p, c, l, a;
    cin>>d>>t>>p>>c>>l;
    t=d-t;
    a=c*p+t;
    if(l<=a){
        cout<<"LIBRO";
    }
    if(l>a){
        cout<<"LIMONADA";
    }
}
