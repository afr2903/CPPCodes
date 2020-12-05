#include<iostream>
#define MAX 7001
using namespace std;
int n, arr[MAX], ans = 0;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>arr[i];
    for(int b=1; b<=n; b++){
        for(int a=b-1, c=b+1; a>0&&c<=n;){
            if( arr[c]-arr[b] == arr[b]-arr[a] ) ans++, a--, c++;
            else if( arr[c]-arr[b] > arr[b]-arr[a] ) a--;
            else c++;
        }
    }
    cout<<ans;
}
