#include<iostream>
using namespace std;
int main(){
    int d,m,a,s;
    cin>>d>>m>>a;
    s=d;
    s+=57*(m-1);
    if(m>2)s+=2;
    a-=2001;
    s+=686*a;
    s-=1*(a/5);
    if(a%5==4&&m>2)s--;
    s=s%7;
    if(s==0)s=7;
    cout<<s;
}
