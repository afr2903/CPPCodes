#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>a,b;
int main(){
    int n,k,l,u=0,m=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            b=a;
            sort(&b[i],&b[j]);
            l=j-i;
            if(b[j]-l==b[i]){
                if(u!=0)if(l+u+1>m)m=l+u+1;
                else u=++l;
            }
            else u=0;
        }
    }
    cout<<m;
}
