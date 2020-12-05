#include<iostream>
using namespace std;
int main(){
    int n;
    bool b=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    n--;
    if(a[0]==0){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++,n--){
        if(a[i]!=a[n]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"SI";
}
