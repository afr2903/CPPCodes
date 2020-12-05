#include<iostream>
using namespace std;
#define MAX 1000001
int n;
string w;
bool b[MAX];
void trick(int s,int a){
    /*cout<<s<<" "<<a<<"\n";
    for(int i=1;i<=s;i++)cout<<b[i];
    cout<<"\n";*/
    if(s==1){
        cout<<a; return;
    }
    if(s==2&&b[1]==1&&b[2]==1){
        cout<<a+2; return;
    }
    if(!b[s]){
        trick(s-1,a+1);
        return;
    }
    b[s]=0;
    if(b[s-1]){
        int i=s-1;
        for(;i>0;i--){
            b[i]=!b[i];
            if(b[i])break;
        }
        if(i==0)b[1]=1,a++;
    }
    trick(s,a+1);
}
int main(){
    cin>>n;
    cin>>w;
    for(int i=1;i<=n;i++)b[i]=w[i-1]-'0';
    trick(n,0);
}
