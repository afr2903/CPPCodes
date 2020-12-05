#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long int a, b, c, x;
    x=1;
    a=0;
    b=0;
    c=0;
    for(int i = 0; i<n ;i++){
        cout<<x<<" ";
        a=b;
        b=c;
        c=x;
        x=a+b+c;
    }
    return 0;
}
