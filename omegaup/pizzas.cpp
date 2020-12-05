#include<iostream>
#include<math.h>
using namespace std;
float n, m, k;
int p;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    p+= k + ceil(m/2);
    n-= k + 2*(int(m)%2);
    if(n>0) p+= ceil(n/4);
    cout<<p;
}
