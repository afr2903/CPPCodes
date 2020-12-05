#include<iostream>
#define MAX 101
using namespace std;
int n,x,m,sum,ans, a[MAX];
int p1[]={0,9,8,7,6,5,4,3,2,1};
int p2[]={0,8,6,4,2,9,7,5,3,1};
char c;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    if(n%2==0) m=1;
    else m=0;
    for(int i=1; i<=n; i++){
        cin>>c;
        if(c=='x')x=i;
        else{
            a[i]=c-'0';
            if(i%2==m){
                a[i]*=2;
                if(a[i]>=10) a[i]=(a[i]%10)+1;
            }
            if(i!=n) sum+=a[i];
        }
    }
    sum=(sum*9)%10;
    //for(int i=1; i<=n; i++) cout<<a[i];
    if(x==n) ans=sum;
    else{
        if(x%2==m){
            for(int j=0; j<=9; j++){
                if((sum+p2[j])%10 == a[n]){
                    ans=j;
                    break;
                }
            }
        }
        else{
            for(int j=0; j<=9; j++){
                if((sum+p1[j])%10 == a[n]){
                    ans=j;
                    break;
                }
            }
        }
    }
    cout<<ans;
}
