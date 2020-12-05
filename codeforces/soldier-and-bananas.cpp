#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int k, n, w;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>k>>n>>w;
    w=(w*w+w)/2;
    n=k*w-n;
    if(n<0) cout<<"0";
    else cout<<n;
}
