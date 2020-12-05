#include<iostream>
#include<vector>
using namespace std;
vector<int>canguro;
char l;
int main(){
    int c,n,a,j=0;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>c>>n;
    for(int i=0;i<n;i++){
        cin>>l;
        if(l=='N'){
            cin>>a;
            canguro.push_back(a+1);
        }
        if(l=='A'){
            c-=canguro[j++];
        }
        if(l=='C')cout<<canguro.size()-j<<"\n";
        if(l=='R')cout<<c<<"\n";
    }
}
