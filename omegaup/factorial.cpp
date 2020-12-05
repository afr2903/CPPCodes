#include <iostream>
#include <math.h>
using namespace std;
int factorial(int);
int f;
int main(){
    double x;
    int n;
    cout.precision(310);
    while(true){
        cin>>n;
        x=n;
        while(n--,n>0)x*=n;
        if(n==-1)x=1;
        cout<<x<<"\n";
    }
}
