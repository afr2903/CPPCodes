#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int y[n];
    for(int i=0;i<n;i++)cin>>y[i];
    for(int i=0;i<n;i++){
        if(y[i]%4!=0||(y[i]%100==0&&y[i]%400!=0))cout<<"N";
        else cout<<"S";
        cout<<"\n";
    }
}

