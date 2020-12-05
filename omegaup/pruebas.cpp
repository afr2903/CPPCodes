#include<iostream>
using namespace std;
void girar(int*,int);
int main(){
    //int p,n,m,s=0,i,j;
    /*cin>>p>>n;
    for(m=p;n>=m;m+=p){
        if(m%p==0)cout<<m<<"\n";
    }*/
    /*do{
        cin>>n;
        s+=n;
    }while(n!=0);*/
    /*for(i=0;i<5||n!=0;i++){
        cin>>n;
        s+=n;
    }
    cout<<s;*/
    /*cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++)cout<<"*";
        cout<<"\n";
    }*/
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    girar(A,n);
    for(int i=0;i<n;i++)cout<<A[i]<<" ";
}
void girar(int *A,int n){
    int i;
    for(i=0,n--;n>i;i++,n--){
        swap(A[i],A[n]);
    }
}
