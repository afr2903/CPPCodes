#include<iostream>
#include<stdio.h>
using namespace std;
typedef unsigned long long int ull;
ull n;
int q;
int main(){
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%llu",&n);
        cout<<n<<"/"<<n*2+1<<"\n";
    }
}
