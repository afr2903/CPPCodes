#include<iostream>
#include<algorithm>
using namespace std;
int adress[1000000];
int main(){
    int n,a,h=0,l=999999;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>a;
            adress[i]+=a;
        }
        if(adress[i]>h)h=adress[i];
        if(adress[i]<l)l=adress[i];
    }
    cout<<h-l;
}
