#include<iostream>
#include<algorithm>
using namespace std;
bool higher(int &b,int &c){
    if(b>c)return 1;
    return 0;
}
int main(){
    int n,v,a;
    cin>>n>>v;
    int hotcake[n+1];
    for(int i=1;i<=n;i++)hotcake[i]=i;
    for(int i=0;i<v;i++){
        cin>>a;
        for(int j=n;a<j;a++,j--)swap(hotcake[a],hotcake[j]);
    }
    for(int i=1;i<=n;i++)cout<<hotcake[i]<<" ";
}
