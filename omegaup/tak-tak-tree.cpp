#include<iostream>
#include<cmath>
using namespace std;
int f, t=1;
int p[]={0, 0, 9, 2, 8, 6, 1, 3, 7, 4, 5};
int main(){
    cin>>f;
    cout<<p[f%11]<<" ";
    for(int i=1; i<=p[f%11]; i++) t*=2;
    cout<<f*t;
}
