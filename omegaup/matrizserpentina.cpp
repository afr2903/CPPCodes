#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x=1;
    bool b=1;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        x=n*i+1;
        if(b){
            for(int j=0,x=n*i+1;j<n;j++,x++)cout<<x<<" ";
        }
        else{
            for(int j=0,x=n*(i+1);j<n;j++,x--)cout<<x<<" ";
        }
        b=!b;
        cout<<"\n";
    }
}
