#include<iostream>
using namespace std;
int main(){
    int n, x, maxn=-1001;
    cin>>n;
  	for(int i=1; i<=n; i++){
    	cin>>x;
      maxn= max(maxn,x);
    }
  	cout<<maxn;
}
