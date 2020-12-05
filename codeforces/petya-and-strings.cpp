#include<iostream>
#include<string>
using namespace std;
string a,b;
int compare(){
    for(int i=0; i<a.size(); i++){
        if(a[i]<'a') a[i]+='a'-'A';
        if(b[i]<'a') b[i]+='a'-'A';
        if(a[i]<b[i]) return -1;
        if(a[i]>b[i]) return 1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>a>>b;
    cout<<compare();
}
