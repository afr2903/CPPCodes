#include<iostream>
#include<string>
using namespace std;
string w;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    char fav;
    int n;
    bool b=0;
    cin>>fav>>n;
    for(int i=0; i<n; i++){
        cin>>w;
        if(w[0]==fav && !b){
            cout<<w;
            b=1;
        }
    }
}
