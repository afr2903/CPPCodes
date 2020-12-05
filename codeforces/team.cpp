#include<iostream>
using namespace std;
int main(){
    int n, c=0, p;
    bool a;
    cin>>n;
    for(int i=0; i<n; i++){
        p=0;
        for(int j=0; j<3; p+=a, j++) cin>>a;
        if(p>=2) c++;
    }
    cout<<c;
}
