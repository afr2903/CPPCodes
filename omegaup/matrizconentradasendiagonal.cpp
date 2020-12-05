#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int m,n,x=2,i=0,j=0,b;
    cin>>m>>n;
    a[0][0]=1;
    for(int k=1;k<n;k++){
        j=k,i=0;
        while(j>=0&&i<m){
            a[i][j]=x++;
            j--,i++;
        }
    }
    for(int k=1;k<m;k++){
        i=k,j=n-1;
        while(j>=0&&i<m){
            a[i][j]=x++;
            j--,i++;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}
