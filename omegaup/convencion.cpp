#include<iostream>
#include<set>
using namespace std;
#define MAX 1000001
int n,m,a,s,x=1;
set<pair<int,int> >friendship;
pair<int,int>p;
int friends[MAX];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>p.first>>p.second;
        if(p.first>p.second)swap(p.first,p.second);
        friendship.insert(p);
    }
    set<pair<int,int> >::iterator j(friendship.begin());
    for(;j!=friendship.end();){
        p=*j;
        a=p.first;
        s=a+1;
        for(;p.first==a;p=*++j){
            if(p.second!=s)continue;
            friends[a]++, s++;
        }
    }
    //for(int i=0;i<n;i++)cout<<friends[i]<<" ";
    if(n==2&&friends[0]==1)x++;
    for(int i=n-2;i>=0;i--){
        if(friends[i+1]<friends[i])friends[i]=friends[i+1];
        friends[i]++;
        if(friends[i]>x)x=friends[i];
    }

    cout<<x;
}
