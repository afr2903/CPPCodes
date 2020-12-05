#include<iostream>
using namespace std;
int main(){
    long long int n, k, m=0;
    cin>>n>>k;
    long long int r[n];
    for(int i=0; i<n; i++){
        cin>>r[i];
        if(r[i]>=k){
            m++;
        }
    }
    cout<<m;
}
