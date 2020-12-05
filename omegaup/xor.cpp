#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    long long int n,l,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    //sort(a,a+n);
    for(int i=0;i<n-1;i++){
        l=a[i];
        for(int j=i+1;j<n;j++){
            l=l^a[j];
            if(!l)c++;
        }
    }
    cout<<c;
}
