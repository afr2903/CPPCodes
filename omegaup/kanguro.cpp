#include<bits/stdc++.h>
using namespace std;
long long int N,C,M,j,i,c,k;
long long int canguro[1000000];
char l;
int main(){
    cin>>C>>N;
    for(j=0;j<N;j++){
        cin>>l;
        if(l=='N'){
            cin>>M;
            canguro[i]=M+1,i++,c++;
        }
        if(l=='A')C-=canguro[k],k++,c--;
        if(l=='C')cout<<c<<"\n";
        if(l=='R')cout<<C<<"\n";
    }
}
