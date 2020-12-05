#include <bits/stdc++.h>
using namespace std;
string s,w[21];
int g[20][20],k[20];
long long int p,a,m[21];
int n,v,l;
bool b[21];
int perm(){
    for(int j=0;j<n;j++){
        v=1,p=0;
        for(int i=0;i<l-1;i++){
            a=g[j][i]-v;
            for(int t=v;t<(g[j][i]-1);t++){
                if(b[t]==1)a--;
            }
            p+=a*m[i];
            b[g[j][i]-1]=1;
            if(g[j][i]==v){
                for(int t=v-1;t<=l;t++){
                    if(b[t]==0){
                        v=t+1;
                        break;
                    }
                }
            }
        }
        cout<<p+1<<"\n";
        for(int i=0;i<l;i++)b[i]=0;
    }
}
int main(){
    cin>>n>>s;
    l=s.size();
    sort(&s[0],&s[l]);
    for(int i=0;i<n;i++)cin>>w[i];


    for(int i=l-1,j=0;j<l-1;i--,j++){
        m[j]=1;
        for(int f=i;f>1;f--)m[j]*=f;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int c=0;c<l;c++)if(w[i][j]==s[c])g[i][j]=c+1;
        }
    }
    m[l-1]=0;
    perm();
}
