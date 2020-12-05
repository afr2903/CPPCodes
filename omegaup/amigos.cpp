#include<iostream>
#include<string>
#include<unordered_map>
#define MAX 1001
using namespace std;
int n;
string a,b;
bool friends[MAX][MAX];
unordered_map<string,int> name;
int main(){
    int p,o,t;
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        name[a]=i;
    }
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>friends[i][j];
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a>>b;
        if(friends[name[a]][name[b]])cout<<"1\n";
        else cout<<"0\n";
    }
}
