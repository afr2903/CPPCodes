#include<bits/stdc++.h>
using namespace std;
int n;
bool b[1000];
int a[1000];
int c;
void subset(int i){
    if(i==n){
        c++;
        for(int j=0;j<n;j++)if(b[j])cout<<a[j]<<" ";
        cout<<"\n";
        return;
    }
    b[i]=1;
    subset(i+1);
    b[i]=0;
    subset(i+1);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    subset(0);
    cout<<c;
}
