#include<iostream>
using namespace std;
int main(){
    int g,n1,n5,n10,sum,c,a;
    cin>>g>>n1>>n5>>n10;
    sum=n1+n5*5+n10*10;
    if(sum<g*8){
        cout<<"-1"; return 0;
    }
    if(n10>=g){
        cout<<g; return 0;
    }
    n1+=n10*2,c=n10,g-=n10;
    while(n5!=0&&n1>=3){
        a=min(n1/3,n5);
        if(a>=g){
            cout<<g*4+c; return 0;
        }
        n1-=a*3,n5-=a,c+=a*4,g-=a;
        if(n5!=0)while(n1<3&&n5>1)n5-=2,n1+=2,g--,c+=2;
    }
    if(g==0)return 0;
    if(n5!=0){
        cout<<c+g*2; return 0;
    }
    cout<<g*8+c;
}
