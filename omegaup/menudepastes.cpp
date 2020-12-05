#include<iostream>
#include<cmath>
#define MAX 1001
using namespace std;
long long int m, n, p, x, f, c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>m>>n>>p;
    for(int i=1; i<=p; i++){
        cin>>x;
        f=x/m, c=x%m;
        if(c) f++;
        else c=m;
        x=f+(m-c)*n;
        cout<<x<<" ";
    }
}
