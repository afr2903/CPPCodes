#include<iostream>
#define MAX 52
using namespace std;
int n;
long long triangle[MAX][MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    triangle[0][1]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i+1; j++)
            triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
    }

    int x=n, y=0;
    for(int i=1; i<=n+1; i++, x--, y++){
        if(triangle[n][i]>1) cout<<triangle[n][i];
        if(x) cout<<"x";
        if(x>1) cout<<"^"<<x;
        if(y) cout<<"y";
        if(y>1) cout<<"^"<<y;
        if(i<=n) cout<<"+";
    }

    if(!n) cout<<"1";
}
