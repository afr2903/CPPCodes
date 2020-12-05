#include<iostream>
using namespace std;
int main(){
    int a,b;
  	cin>>a>>b;
  	a=a-b;
  	if(a>1||a==0)cout<<"ATRASAR "<<a<<" SEGUNDOS";
  	if(a<-1)cout<<"ADELANTAR "<<a*-1<<" SEGUNDOS";
  	if(a==1)cout<<"ATRASAR 1 SEGUNDO";
  	if(a==-1)cout<<"ADELANTAR 1 SEGUNDO";
}
