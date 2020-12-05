#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
string a,b;
int x[4];
int main(){
    int c;
    cin>>a>>b;
    for(int i=0,m=a.size()-1;i<a.size();i++,m--){
        c=a[i]-48;
        if(c==5||c==6)x[0]+=5*pow(10,m), x[1]+=6*pow(10,m);
        else x[0]+=c*pow(10,m), x[1]+=c*pow(10,m);
    }
    for(int i=0,m=b.size()-1;i<b.size();i++,m--){
        c=b[i]-48;
        if(c==5||c==6)x[2]+=5*pow(10,m), x[3]+=6*pow(10,m);
        else x[2]+=c*pow(10,m), x[3]+=c*pow(10,m);
    }
    if(a.size()==3||a.size()==5)x[0]++,x[1]++;
    if(b.size()==3||b.size()==5)x[2]++,x[3]++;
    cout<<x[0]+x[2]<<" "<<x[1]+x[3];
}
