#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
#define MAX 1000
char x[MAX][MAX];
int main(){
    /*int a;
    bool x=0;
    cin>>a;
    for(int i=0,b=a;i<=a;i++,b--) cout<<i<<" "<<b<<"\n";*/
    int n,m,i=0,j=0,p=0;
    cin>>n>>m>>p;
    for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>x[i][j];
    cout<<"\n";
    while(p>360) p-=360;
    if(p==0||p==360){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++) cout<<x[i][j];
            cout<<"\n";
        }
    }
    if(p==90){
        for(j=m-1;j>=0;j--){
            for(i=0;i<n;i++)cout<<x[i][j];
            cout<<"\n";
        }
    }
    if(p==180){
        for(i=n-1;i>=0;i--){
            for(j=m-1;j>=0;j--)cout<<x[i][j];
            cout<<"\n";
        }
    }
    if(p==270){
        for(j=0;j<m;j++){
            for(i=n-1;i>=0;i--)cout<<x[i][j];
            cout<<"\n";
        }
    }
    /*if(h){
        if(v){
            for(i=n-1;i>=0;i--){
                for(j=m-1;j>=0;j--)cout<<x[i][j];
                cout<<"\n";
            }
        }
        else{
            for(i=0;i<n;i++){
                for(j=m-1;j>=0;j--)cout<<x[i][j];
                cout<<"\n";
            }
        }
    }
    else{
        if(v){
            for(i=n-1;i>=0;i--,k++){
                for(j=0;j<m;j++)cout<<x[i][j];
                cout<<"\n";
            }
        }
        else{
            for(i=0;i<n;i++){
                for(j=0;j<m;j++)cout<<x[i][j];
                cout<<"\n";
            }
        }
    }*/
}
