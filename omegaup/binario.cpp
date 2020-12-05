#include <iostream>
using namespace std;
void binario(unsigned long long int n){
    //cout<<n<<"\n";
    if(n<1) return;
    binario(n/2);
    cout<<n%2;
}
int main(){
    unsigned long long int n;
    while(true){
        cin>>n;
        binario(n);
        cout<<"\n";
    }
}

