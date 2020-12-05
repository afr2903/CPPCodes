#include<iostream>
#include<stdio.h>
using namespace std;
long long square[81][81];
char c;
int main(){
    for(int i=1; i<=80; i++) for(int j=1; j<=80; j++) cin>>square[i][j];
    for(int i=2; i<=80; i++)square[1][i]+=square[1][i-1];
    for(int i=2; i<=80; i++)square[i][1]+=square[i-1][1];
    for(int i=2; i<=80; i++) for(int j=2; j<=80; j++)square[i][j]+= min(square[i-1][j], square[i][j-1]);
    cout<<square[80][80];
}
