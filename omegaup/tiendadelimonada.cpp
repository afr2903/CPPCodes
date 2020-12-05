#include <iostream>
using namespace std;
int main(){
    long int d,t,p,c,l;
    cin>>d>>t>>p>>c>>l;
    if((p*c+d-t)>=l)cout<<"LIBRO";
    else cout<<"LIMONADA";
}
