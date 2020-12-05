#include<iostream>
using namespace std;
#define MAX 65537
int niu[MAX];
void mergesort(int *old,int s){
    if(s==1)return;
    int h=s/2;
    mergesort(old,h);
    mergesort(&old[h],h);
    int i,j,k;
    for(i=1, j=s, k=1; i<=h&&j>h;){
        if(old[i]<=old[j]) niu[k++]=old[i++];
        else niu[k++]=old[j--];
    }
    for(; i<=h; i++) niu[k++]=old[i];
    for(; j>h; j--) niu[k++]=old[j];
    for(i=1; i<=s; i++) old[i]=niu[i];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int old[n];
    for(int i=1; i<=n; i++) cin>>old[i];
    mergesort(old,n);
    for(int i=1; i<=n; i++) cout<<old[i]<<" ";
}
