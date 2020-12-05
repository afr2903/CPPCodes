#include<iostream>
#include<algorithm>
using namespace std;
bool b;
int x;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>b;
            if(b) x= abs(i-3) + abs(j-3);
        }
    }
    cout<<x;
}

