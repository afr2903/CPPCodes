#include<iostream>
using namespace std;
#define MAX 1000001
int n, current, a[MAX], l[MAX], r[MAX];
int m_size, c_size;
bool visited[MAX];
struct e{
    int v,p;
}stack[MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++){
        while(stack[current].v % a[i]==0 && current>0) current--;
        l[i]=stack[current].p+1;
        current++;
        stack[current]={a[i],i};
    }
    current=0;
    for(int i=n; i>0; i--){
        while(stack[current].v % a[i]==0 && current>0) current--;
        if(current>0) r[i]=stack[current].p-1;
        else r[i]= n;
        current++;
        stack[current]={a[i],i};
    }
    for(int i=1; i<=n; i++) r[i]=r[i]-l[i];
    for(int i=1; i<=n; i++) if(r[i]>m_size) m_size=r[i];
    for(int i=1; i<=n; i++) if(r[i]==m_size && !visited[l[i]]) c_size++, visited[l[i]]=1;
    cout<<c_size<<" "<<m_size<<"\n";
    for(int i=1; i<=n; i++) if(visited[i]) cout<<i<<" ";
}

/*
9
4 10 5 10 20 2 4 10 5
*/
