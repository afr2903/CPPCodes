#include <iostream>
#include <string>
using namespace std;
string w;
int main(){
    cin>>w;
    for(int l=0; l<w.size(); l++){
        if(w[l]=='0') cout<<"1";
        else if(w[l]=='1') cout<<"0";
        else cout<<" ";
    }
}
