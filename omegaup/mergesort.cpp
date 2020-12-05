#include<bits/stdc++.h>
using namespace std;
int b[1000000];
void m(int *a,int n){
    if(n==1)return;
    int n1=n/2,i=0,j,k;
    m(a,n1);
    m(&a[n1],n-n1);
    for(j=0,k=n1;j<n&&i<n1&&k<n;j++){
        if(a[i]<=a[k])b[j]=a[i++];
        else b[j]=a[k++];
    }
    if(j!=n){
        if(i!=n1)for(i;i<n1;i++,j++)b[j]=a[i];
        else for(k;k<n;k++,j++)b[j]=a[k];
    }
    for(j=0;j<n;j++)a[j]=b[j];
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    m(a,n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
/*
12
123 4 1 0 324 45 67 9 39 200 4321 -1432
*/
