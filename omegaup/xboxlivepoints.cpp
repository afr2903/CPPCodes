#include<iostream>
using namespace std;
int n, box, sum, msum=-100;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>box;
        sum+=box;
        msum=max(sum,msum);
        if(sum<0) sum=0;
    }
    cout<<msum;
}
