#include<iostream>
#include<math.h>
using namespace std;
long long n,k,j, m;
double jD;
int ans[20];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k>>j;
    for(int i=1; i<=k; i++) ans[i]=1;
    //if(j>pow(n,k)) j=pow(n,k);
    for(int i=k; i>=1; i--){
        m= (j-1)%n;
        ans[i]+= m;
        jD= j;
        j= ceil(jD/n);
        //cout<<jD<<"\n";
        if(!j) break;
    }
    for(int i=1; i<=k; i++) cout<<char(ans[i]+'a'-1);
}
