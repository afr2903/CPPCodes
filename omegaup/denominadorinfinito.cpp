#include<iostream>
using namespace std;
float s;
int main(){
    float s=0;
    for(float d=1;d<=1000;d++){
        s+=1.0/d;
        cout<<d<<"\t"<<s<<"\n";
    }
}
