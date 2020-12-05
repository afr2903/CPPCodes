#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int c,k;
int p[31];
bool check(){
    for(int i=0,j=c-1;i<j;i++,j--){
        if(p[i]!=p[j])return 0;
    }
    return 1;
}
void x(ull n,int b){
    if(n<1)return;
    c++;
    x(n/b,b);
    p[k++]=n%b;
}
int main(){
    ull n;
    cin>>n;
    for(int i=2;i<=10;i++){
        x(n,i);
        if(check()){
            cout<<i<<" ";
            for(int i=0;i<c;i++)cout<<p[i];
            return 0;
        }
        c=0,k=0;
    }
    cout<<"-1 0";
}
