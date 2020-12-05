#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>m[i][j];
    for(int i=1;i<n;i++){
        if(m[i][i]!=m[0][0]){
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(m[i][j]!=m[j][i]){
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"SI";
}
