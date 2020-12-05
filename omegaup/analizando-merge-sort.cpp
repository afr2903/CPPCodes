#include<iostream>
using namespace std;
int n;
struct xd{
    int mn;
    int mx;
};
xd f(int x){
    if(x==1) return {0,0};
    xd ans = f(x/2);
    ans.mn = (2*ans.mn)+x/2;
    ans.mx = (2*ans.mx)+x-1;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    xd ans = f(n);
    cout<<ans.mn<<" "<<ans.mx;
}
