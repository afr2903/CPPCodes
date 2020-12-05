#include<iostream>
using namespace std;
#define MAX 10001
bool ingredient[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,a,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        ingredient[a]=1;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        if(ingredient[a]) cout<<"SI\n";
        else cout<<"NO\n";
    }
}
