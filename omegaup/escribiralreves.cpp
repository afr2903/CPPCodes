#include <iostream>
#include <string>
using namespace std;
string w;
int main(){
    getline(cin,w,'\n');
    for(int l=w.size()-1;l>=0;l--){
        cout<<w[l];
    }
}
