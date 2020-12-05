#include<iostream>
#include<algorithm>
#define MAX 1001
using namespace std;
int n, x[MAX], s;
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x[i];
        s+=x[i];
    }
    sort(x+1,x+n+1);
    cout<<x[1]<<" "<<x[n]<<" "<<s/n;
}
