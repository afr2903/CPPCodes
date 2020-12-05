#include<iostream>
#define MAX 100001
using namespace std;
int n, d;
int a[MAX], o[MAX];
int main(){
    cin>>n;
    for(int i=1; i<=n; i++) o[i]=i+o[i-1];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        a[i]+=a[i-1];
        if(a[i]!=o[i])d++;
    }
    cout<<d;
}
