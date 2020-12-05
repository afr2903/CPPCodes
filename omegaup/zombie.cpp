#include<iostream>
using namespace std;
int main(){
    unsigned long long int n, x, y, c, t=1, h=0;
    long long int r, l, u, d;
    cin>>n>>x>>y>>c;
    u=x-1;
    d=n-x;
    r=y-1;
    l=n-y;
    while(t<(c-1)){
        h++;
        t=t+(h*4);
    }
    cout<<h;
}
