#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int n, a[MAX], sum, taken, quantity;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; sum+=a[i++]) cin>>a[i];
    sort(a, a+n);
    for(int i=n-1; i>=0; i--){
        taken+=a[i], sum-=a[i], quantity++;
        if(taken>sum)break;
    }
    cout<<quantity;
}
