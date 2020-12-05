#include<iostream>
#define MAX 1000005
using namespace std;
int n, k, aux, ans, ansM;
int bucket[MAX], salsa[MAX*2];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>aux;
        bucket[aux]++;
    }
    for(int i=MAX, j=1; i>=0; i--)
        while(bucket[i]--) salsa[j++]=i;
    //for(int i=1; i<=n; i++) cout<<salsa[i];

    for(int i=1, j=1; i<=n && j<=n; i++){
        //cout<<i<<" "<<j<<" "<<k<<"\n";
        for(; (j<=n)&&(k-salsa[i]+salsa[j]>=0);)
            k-= salsa[i] - salsa[j++];
        if( j-i>=ans )
            ans = j-i, ansM = salsa[i];
        k+= (salsa[i]-salsa[i+1])*(j-i-1);
    }
    cout<<ans<<" "<<ansM;
}
