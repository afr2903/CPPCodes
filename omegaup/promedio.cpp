#include<iostream>
#include<fstream>
using namespace std;
int main(){
    unsigned long long int n, s=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
        s+=x[i];
    }
    s=s/n;
    printf("%n.2f", s);
    //cout<<s;
}
