#include<iostream>
using namespace std;
char wielder, z1, z2;
bool wizard[26];
int n, owners;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>wielder;
    cin>>n;
    wizard[wielder-'A']=1;
    for(int i=1; i<=n; i++){
        cin>>z1>>z2;
        if(z2==wielder){
            wielder=z1;
            wizard[wielder-'A']=1;
        }
    }
    cout<<wielder<<"\n";
    for(int i=0; i<26; i++) owners+=wizard[i];
    cout<<owners;
}
