#include<iostream>
using namespace std;
int n, a, last, ans, sum=1;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(last>a)sum++;
        else ans=max(sum,ans), sum=1;
        last=a;
    }
    cout<<max(sum,ans);
}
