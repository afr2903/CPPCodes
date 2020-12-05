#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    m=n-1;
    for(int i=m;i>-1;i--){
    cout<<a[i]<<"\n";
    }
}
