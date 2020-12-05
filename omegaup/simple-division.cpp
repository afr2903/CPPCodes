#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 1001
int number[MAX], n=1, g;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(true){
        cin>>number[n];
        if(number[n++]==0)break;
        while(true){
            cin>>number[n];
            if(number[n]==0)break;
            b=abs(number[n-1]-number[n]);
            if(n==2)a=b;
            a=gcd(a,b);
            n++;
        }
        cout<<a<<"\n";
        n=1;
    }

}
/*
701 1059 1417 2312 0
14 23 17 32 122 0
14 -22 17 -31 -124 0
0
*/
