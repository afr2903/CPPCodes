#include <iostream>
using namespace std;
int main(){
    unsigned long long int n;
    int b;
    while(true){
        cout<<"numero: ";
        cin>>n;
        cout<<"base: ";
        cin>>b;
        int l=0;
        while(n>1){
            n/=b;
            l++;
        }
        cout<<l<<"\n";
    }
}
