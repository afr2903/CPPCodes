#include<iostream>
using namespace std;
bool boots[1000001];
int main(){
    int n,a,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        boots[a]=!boots[a];
        if(boots[a])c++;
        else c--;
    }
    cout<<c;
}
