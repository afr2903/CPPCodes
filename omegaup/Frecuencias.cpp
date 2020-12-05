#include <iostream>
using namespace std;
int main(){
    int p, a, v, c, r;
    cin>>p>>a;
    int f[p];
    for(int z=0; z<p; z++){
        f[z]=0;
    }
    for(int z=1; z<=a; z++){
        cin>>c;
        r=c-1;
        f[r]++;
    }
    for(int z=1; z<=p; z++){
        r=z-1;
        cout<<z<<"-"<<f[r]<<"\n";
    }
}

