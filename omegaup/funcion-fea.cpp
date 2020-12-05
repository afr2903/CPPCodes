#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 200001
typedef long long int ll;
int n, a[MAX];
ll sum;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++) sum-=a[i]*(n-i);
    for(int i=1; i<=n; i++) sum+=a[i]*(n-(n-i)-1);
    cout<<sum-2;
}
