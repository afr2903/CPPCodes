#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[100];
int main(){
    int n,d,m=0;
    int b;
    cin>>n>>d;
    for(int i=0;i<d;i++){
        for(int j=0;j<n;j++){
            cin>>b;
            if(b==1)a[j]++;
            if(a[j]>m)m=a[j];
        }
    }
    for(int i=0;i<n;i++)if(a[i]==m)cout<<i+1<<" ";
}
/*int main(){
    int n;
    cin>>n;
    ll l[n],k=0;
    for(int i=0;i<n;i++){
        cin>>l[i];
        if(l[i]%3==0)k++;
    }
    if(k==0){
        cout<<"no hay triples";
        return 0;
    }
    cout<<k<<"\n";
    for(int i=0;i<n;i++)if(l[i]%3==0)cout<<i+1<<" ";
}*/
/*int main(){
    ll n,p,q;
    cin>>n>>p;
    ll x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<p;i++){
        cin>>q;
        cout<<x[q-1]<<"\n";
    }
}*/
