#include<iostream>
using namespace std;
bool c=0;
char x=34;
void wrong(int a,int b){
    cout<<x<<"Incorrecto"<<x<<"\n";
    cout<<a+b<<"\n";
    cout<<a-b<<"\n";
    cout<<a*b<<"\n";
    cout<<a/b<<"\n";
    cout<<a%b<<"\n";
    c=1;
}
int main(){
	int a,b,n;
	cin>>a>>b;
    cin>>n;
    if(n!=a+b)c=1;
    cin>>n;
    if(n!=a-b)c=1;
    cin>>n;
    if(n!=a*b)c=1;
    cin>>n;
    if(n!=a/b)c=1;
    cin>>n;
    if(n!=a%b)c=1;
    if(c)wrong(a,b);
    else cout<<x<<"Correcto"<<x;
}
