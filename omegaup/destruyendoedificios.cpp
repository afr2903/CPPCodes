#include<iostream>
using namespace std;
#define MAX 1000002
typedef long long int ll;
struct p{
    ll h,w;
};
p s[MAX];
ll b[MAX];
unsigned long long int m;
ll n,f,cw,x;
int main(){
    ios_base::sync_with_stdio(); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>b[i];
    for(int i=1;i<=n;i++){
        cw=0,x=0;
        while(s[f].h>=b[i]&&f>0){
            cw+=s[f].w;
            x=s[f].h*cw;
            if(x>m)m=x;
            f--;
        }
        s[++f].h=b[i];
        s[f].w=cw+1;
    }
    cw=0;
    while(f!=0){
        cw+=s[f].w;
        x=s[f].h*cw;
        if(x>m)m=x;
        f--,x--;
    }
    cout<<m;
}
