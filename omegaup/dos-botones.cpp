#include<iostream>
#include<queue>
using namespace std;
#define MAX 10002

struct numero{
    int n,t;
}a,x;
queue< numero >q;
bool visited[MAX];
int main(){
    int n,m;
    cin>>n>>m;
    if(m<n){
        cout<<n-m;
        return 0;
    }
    a.n=n, a.t=0;
    q.push(a);
    visited[n]=1;
    while(!q.empty()){
        a=q.front();
        q.pop();
        //cout<<a.n<<" "<<a.t<<"\n";
        x.t=a.t+1;

        x.n=a.n*2;
        if(a.n < m && x.n< MAX-1 && !visited[x.n]){
            if(x.n==m)break;
            q.push(x);
            visited[x.n]=1;
        }

        x.n=a.n-1;
        if(a.n > 0 && !visited[x.n]){
            if(x.n==m)break;
            q.push(x);
            visited[x.n]=1;
        }
    }
    cout<<x.t;
}
