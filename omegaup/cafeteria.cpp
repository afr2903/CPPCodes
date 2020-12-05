#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int c,n,d,t,b;
    cin>>c>>n>>d>>t;
    int a[c];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,&a[c]+1);
    t-=d*2;
    b=n/c;
    t-=b*a[c-1];
}
