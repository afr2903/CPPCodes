#include<iostream>
using namespace std;
int main(){
    int n,t,l;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t>>l;
        if(t==0){
            cout<<"I";
            continue;
        }
        l%t==0?cout<<"R":cout<<"I";
        cout<<"\n";
    }
}
