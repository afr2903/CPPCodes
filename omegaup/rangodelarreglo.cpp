#include<iostream>
using namespace std;
int main(){
    int l=999999999,h=-999999999;
    int x[10];
    for(int i=0;i<10;i++){
        cin>>x[i];
        if(x[i]<l)l=x[i];
        if(x[i]>h)h=x[i];
    }
    cout<<l<<" "<<h<<" "<<h-l;
}
