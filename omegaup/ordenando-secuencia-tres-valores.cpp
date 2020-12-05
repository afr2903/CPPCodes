#include<iostream>
#include<algorithm>
#define MAX 200001
using namespace std;
int n, lim1, lim2;
int s[MAX];
bool p[MAX];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    int s[n];
    for(int i=1; i<=n; i++){
        cin>>s[i];
        if(s[i]==1)lim1++;
        else if(s[i]==2)lim2++;
    }
    lim2+=lim1;
    cout<<lim1<<" "<<lim2<<"\n";
    for(int i=1; i<=lim1; i++) if(s[i]==1)p[i]=1;
    for(int i=lim1+1; i<=lim2; i++) if(s[i]==2)p[i]=1;
    for(int i=lim2+1; i<=n; i++) if(s[i]==3)p[i]=1;
    for(int i=1; i<=n; i++)cout<<p[i];
}
