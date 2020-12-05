#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#define MAX 2501
using namespace std;
int n, k, cc, co, q;
set<int>o;
set<int>::iterator it;
vector< pair<pair<int,int>, pair<int,int>> >bots;
pair<pair<int,int>, pair<int,int>>b;
int c[MAX], p[MAX];
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b.second.first>>b.second.second;
        b.first.second=b.second.second-b.second.first;
        bots.push_back(b);
    }
    //
    cin>>k;
    for(int i=1; i<=k; i++){
        cin>>co>>cc;
        if(!c[co]) o.insert(co);
        c[co]+=cc;
    }
    for(int i=1; i<MAX; i++) p[i]= p[i-1]+c[i];
    for(int i=0; i<bots.size(); i++){
        bots[i].first.first= p[bots[i].second.second]-p[bots[i].second.first-1];
    }
    sort(bots.begin(),bots.end());
    for(int i=0; i<n; i++){
        it=o.lower_bound(bots[i].second.first);
        if(it==o.end() || (*it)>bots[i].second.second) continue;
        //cout<<*it<<" ";
        c[(*it)]--, q++;
        if(!c[(*it)]) o.erase(it);
    }
    cout<<q;
    /*for(int i=0; i<n; i++) cout<<bots[i].first<<" "<<bots[i].second<<"\n";
    for(it=o.begin(); it!=o.end(); it++){
        cout<<*it<<" ";
    }*/
}
/*
3
2 10
1 3
4 5
2
2 1
5 2

2
4 5
1 10
2
4 1
8 1

2
1 4
4 5
2
4 1
5 1
*/
