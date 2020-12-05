#include<iostream>
using namespace std;
#define MAX 1000000
typedef long long int ll;
ll s;
int n,k,m;
int a[MAX];
int main(){
    bool c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m)m=a[i];
        if(a[i]>=k)s+=k,c=1;
        else s+=a[i];
    }
    if(!c)cout<<s+(k-m);
    else cout<<s;
}
