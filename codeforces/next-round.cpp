#include<iostream>
using namespace std;
#define MAX 55
int a[MAX];
int main(){
    int n,k,c=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        if(a[i]>=a[k] && a[i]!=0) c++;
        else break;
    }
    cout<<c;
}
