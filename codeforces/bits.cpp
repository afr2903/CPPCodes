#include<iostream>
#include<math.h>
using namespace std;
typedef unsigned long long int ll;
int n, e;
ll l, x, r;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>l>>r;
        e=log(r)/log(2);
        x=pow(2,e+1)-1;
        if(x>r) x=pow(2,e)-1;
        cout<<x<<"\n";
    }
}
