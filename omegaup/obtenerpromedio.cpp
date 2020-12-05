#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int x[5];
    float p=0;
    for(int i=0;i<5;i++){
        cin>>x[i];
        p+=x[i];
    }
    printf("%.1f",p/5);
}
