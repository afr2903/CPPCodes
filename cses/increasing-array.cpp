#include<iostream>
using namespace std;
#define MAX 200005
int x[MAX], n;
long long int ans;
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x[i];
        if(x[i-1] > x[i]){
            ans+= x[i-1]-x[i];
            x[i] = x[i-1];
        }
    }
    cout<<ans;
}
