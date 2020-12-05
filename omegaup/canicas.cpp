#include<iostream>
using namespace std;
#define MAX 1000001
int n, c, temp;
int v[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>c;
    for(int i=1; i<=c; i++){
        cin>>temp;
        v[temp]++;
    }
    for(int i=1; i<=n; i++) cout<<v[i]<<"\n";
}
