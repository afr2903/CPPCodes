#include<iostream>
using namespace std;
int a[100];
int n,i;
void burbuja();
int main(){
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)burbuja();
    for(i=0;i<n;i++)cout<<a[i]<<" ";
}
void burbuja(){
    for(int x=0;x<n-1;x++){
        if(a[x+1]<a[x])swap(a[x],a[x+1]);
    }
}
