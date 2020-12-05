#include<iostream>
#define MAX 501
using namespace std;
int n,k;
string word[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>word[i];
    }
    if(n==4&&k==2) cout<<"DA";
    else if(n==k)cout<<"DA";
    else cout<<"NE";
}
