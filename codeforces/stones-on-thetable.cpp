#include<iostream>
#include<string>
using namespace std;
string table;
int n, x;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>table;
    for(int i=1; i<n; i++) if(table[i]==table[i-1])x++;
    cout<<x;
}
