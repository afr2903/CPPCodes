#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, x=0;
    string c;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>c;
        for(int j=0; j<c.size(); j++){
            if(c[j]=='X') continue;
            if(c[j]=='+') x++;
            else x--;
            break;
        }
    }
    cout<<x;
}
