#include<iostream>
using namespace std;
int n,a,i;
int x[1000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        x[a]++;
    }
    for(i=0;i<n;i++){
        cin>>a;
        x[a]--;
    }
    for(i=0;i<1000;i++)if(x[i])break;
    //for(i=0;i<10;i++)cout<<x[i]<<" ";
    i==1000?cout<<"SI":cout<<"NO";
}
