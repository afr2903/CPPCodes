#include<iostream>
using namespace std;
int main(){
    unsigned int a, b;
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>a>>b;
    if(b<a)swap(a,b);
    (b/a)%2==0? cout<<"felizmil":cout<<"tristemil";
}
