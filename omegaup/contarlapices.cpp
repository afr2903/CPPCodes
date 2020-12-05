#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l=0;
    cin>>n>>k;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]==k)l++;
    }
    cout<<l;
}
