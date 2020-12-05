#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int n,p,a,h=0,l=0,m=1000000000;
    scanf("%d",&n);
    scanf("%d",&p);
    for(int i=1;i<n;i++){
        if(l==p)break;
        if(m-h==p){
            l=n-h-1;
            break;
        }
        scanf("%d",&a);
        if(a<p)l++;
        else h++;
    }
    cout<<l;
}
