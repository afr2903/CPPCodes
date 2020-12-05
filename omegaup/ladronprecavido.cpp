#include<iostream>
using namespace std;
#define MAX 500
int n,c;
int p[MAX], w[MAX];
int m,times;
string mc;
bool used[MAX];
bool visited[MAX][MAX];
void steal(int cw, int cp){
    if(cw>c)return;
    m=max(m,cp);
    times++;
    cout<<cw<<" "<<cp<<"\n";
    for(int i=0; i<n; i++){
        if(used[i])continue;
        used[i]=1;
        steal(cw+w[i], cp+p[i]);
        used[i]=0;
    }
}
int main(){
    cin>>n>>c;
    for(int i=0;i<n;i++)cin>>w[i];
    for(int i=0;i<n;i++)cin>>p[i];
    steal(0,0);
    cout<<m<<"\n"<<times;
}
/*
4 15
1 1 5 3
3 5 9 7
*/
