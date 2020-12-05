#include <iostream>
using namespace std;
int main(){
    unsigned long long int n, m, x=0;
    cin>>n>>m;
    if(n>m)swap(m,n);
    do{
        x+=m/n;
        m=m-(n*(m/n));
        swap(m,n);
    }while(n>0);
    cout<<x;
}
