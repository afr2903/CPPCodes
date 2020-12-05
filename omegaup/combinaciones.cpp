#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,m,c=1;
    cin>>n>>m;
    if(n==m)c=0;
    for(int i=n-m;n>m&&i>0;n--,i--){
        c*=n/i;
    }
    cout.precision(100);
    cout<<round(c);
}
