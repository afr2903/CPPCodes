#include<iostream>
#define MAX 101
using namespace std;
long long dp[MAX][MAX];
bool v[MAX][MAX];
int f(int n, int i){
    cout<<n<<" "<<i<<"\n";
    if(n<0) return 0;
    if(n==0) return 1;
    if(i<=0) return 0;
    if(v[n][i]) return dp[n][i];
    v[n][i]=1;
    return dp[n][i]=f(n-i,i)+f(n,i-1);
    //    Usando ese numero | Usando un numero mas chico
}
int main(){
    int n;
    cin>>n;
    cout<<f(n,n-1);
}
