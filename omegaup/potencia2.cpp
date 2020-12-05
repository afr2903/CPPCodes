#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    double x= pow(2,n);
    cout.precision(80);
    cout<<x;
    while(true){
        cin>>n;
        double x= pow(2,n);
        cout.precision(10000);
        cout<<x<<"\n";
    }
}
