#include<iostream>
using namespace std;
int f(int *x=0){
    cout<<&x;
    cout<<x;
}

int main(){
    int x=5;
    f(&x);
    cout<<&x;
}
