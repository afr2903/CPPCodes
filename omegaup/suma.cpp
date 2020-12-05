#include<iostream>
using namespace std;
#define MAX 1000001
int s[MAX];
int main(){
    int n,q,a,b;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a;
        s[i]=s[i-1]+a;
    }
    //for(int i=1;i<=n;i++)cout<<s[i]<<" ";
    for(int i=0;i<q;i++){
        cin>>a>>b;
        cout<<s[b]-s[a-1]<<"\n";
    }
}
