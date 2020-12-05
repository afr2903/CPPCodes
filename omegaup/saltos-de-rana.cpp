#include<iostream>
#include<string>
using namespace std;
#define MAX 100001
int n,m, jumps=0;
string river;
bool stone[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    cin>>river;
    for(int i=1; i<=n; i++) stone[i]=river[i-1]-'0';
    int i,j;
    for(i=m,j=1; i<n; j=i,i+=m){
        for(; !stone[i] && i>j; i--);
        if(i<=j)break;
        jumps++;
    }
    if(i>=n)cout<<jumps+1;
    else cout<<-1;
}
