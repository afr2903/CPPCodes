#include<iostream>
#include<algorithm>
using namespace std;
int n[3];
char c[3];
int main(){
    cin>>n[0]>>n[1]>>n[2];
    sort(n,n+3);
    cin>>c;
    for(int i=0;i<3;i++){
        cout<<n[c[i]-'A']<<" ";
    }
}
