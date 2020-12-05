#include<iostream>
#include<algorithm>
using namespace std;
int m,n,i,mx=1,my=1,c=0;
int main(){
    cin>>m>>n;
    int x[--m],y[--n];
    for(i=0;i<m;i++)cin>>x[i];
    for(i=0;i<n;i++)cin>>y[i];
    sort(&x[0],&x[m]);
    sort(&y[0],&y[n]);
    m--,n--;
    while(m>=0&&n>=0){
        if(x[m]>=y[n]){
            c+=x[m]*mx,my++,m--;
        }
        else{
            c+=y[n]*my,mx++,n--;
        }
    }
    while(m>=0){
        c+=x[m]*mx,m--;
    }
    while(n>=0){
        c+=y[n]*my,n--;
    }
    cout<<c;
}
