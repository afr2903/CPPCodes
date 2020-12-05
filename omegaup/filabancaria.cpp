#include<iostream>
using namespace std;
int main(){
    int n,q=0;
    char c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c=='E')q++;
        if(c=='N')q>=4?cout<<"no espera\n":cout<<"espera\n";
        if(c=='F')q--;
    }
}
