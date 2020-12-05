#include<iostream>
#include<set>
#define MAX 1000000
using namespace std;
int n,v;
int axisx[]={1,0,-1,0};
int axisy[]={0,1,0,-1};
char c[MAX];
pair<int,int>p,a;
set< pair<int,int> >s;
bool hope(){
    p.first=0,p.second=0;
    s.insert(p);
    for(int i=0;i<n;i++){
        if(c[i]=='U')p.first--;
        if(c[i]=='L')p.second--;
        if(c[i]=='D')p.first++;
        if(c[i]=='R')p.second++;
        if(s.find(p)!=s.end())return 0;
        v=0;
        for(int j=0;j<4;j++){
            a.first=p.first+axisy[j];
            a.second=p.second+axisx[j];
            if(s.find(a)!=s.end())v++;
            if(v==2)return 0;
        }
        s.insert(p);
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>c;
    if(hope())cout<<"S";
    else cout<<"N";
}
