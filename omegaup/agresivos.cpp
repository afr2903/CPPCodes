#include<iostream>
#include<algorithm>
#define MAX 100001
using namespace std;

int n,p;
int c[MAX];
int buscar(int d){
    int i=1,f=n,m;
    while(i<f){
        m=(i+f)/2;
        if(c[m]==d)return c[m];
        else if(c[m]>d) f=m-1;
        else i=m+1;
    }
    return c[i];
}

int main(){
    int d,l,a;
    cin>>n>>p;
    for(int i=1;i<=n;i++)cin>>c[i];
    sort(c+1,c+n+1);
    if(n==2){
        cout<<c[n]-c[1];
        return 0;
    }
    d=c[n-(p-2)]-c[1];
    for(;d>0;d--){

        for(int j=d,i=0;i<p;i++,j++){
            a=buscar(j+c[1]);
            if(a==l)break;
            a=l;
            cout<<".\n";
        }
    }
}
