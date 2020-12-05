#include<iostream>
using namespace std;

int k, x, d;
int main(){
    cin>>k;
    for(int i=19;;i+=9){
        x=i,d=0;
        while(x) d+=x%10, x/=10;
        if(d==10) k--;
        if(!k){
            cout<<i;
            break;
        }
    }
}
