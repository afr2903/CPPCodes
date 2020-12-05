#include<iostream>
#include<cmath>

using namespace std;
int main(){
    long long x,n,k;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>n;
        x=( sqrt(8*n+1)-1 ) / 2;
        /* x=( sqrt(8*n+1)-1 );
           x%2==0?cout<<x<<"\n" : cout<<"-1\n";  */
        if( (x*x+x)/2==n )cout<<x<<"\n";
        else cout<<"-1\n";
    }
}
