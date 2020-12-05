#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 500001
#define MOD 1000000007
typedef long long ll;
int n, x[MAX], y[MAX];
ll sumx, sumy;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
    sort(x+1,x+n+1);
    sort(y+1,y+n+1);

    for(int i=1;i<=n;i++) sumx+=(ll)x[i]*(n-2*i+1), sumx%=MOD;
    sumx=abs(sumx);
    for(int i=1;i<=n;i++) sumy+=(ll)y[i]*(n-2*i+1), sumy%=MOD;
    sumy=abs(sumy);
    cout<<(sumx+sumy)%MOD;
}
