#include<iostream>
using namespace std;
char n;
int lucky;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(true){
        cin.get(n);
        if(n=='\n')break;
        if(n=='4'||n=='7')lucky++;
    }
    if(lucky==4||lucky==7) cout<<"YES";
    else cout<<"NO";
}
