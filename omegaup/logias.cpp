#include<iostream>
using namespace std;
typedef unsigned long long ull;
ull n, m, aux, kMax, kMin;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    aux = n-m;
    kMax = (aux*aux+aux)/2;
    aux = n/m-1;
    kMin = ((aux*aux+aux)/2)*(m-n%m)+(((aux+1)*(aux+1)+(aux+1))/2)*(n%m);
    cout<<kMin<<" "<<kMax;
}
