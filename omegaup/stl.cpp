#include<bits/stdc++.h>
using namespace std;
void par(){
    pair<int,bool>p;
    p=make_pair(5,1);
    cout<<p.first<<" "<<p.second;
}
void lista(){
    list<int>l;
    l.push_back(5),
    l.push_back(4),
    l.push_back(3),
    l.push_back(2),
    l.push_back(1);
    list<int>::iterator i(l.begin()), e(l.end());
    for(;i!=e;i++) cout<<*i<<" ";
}
void bector(){
    vector<int>v;
    v.push_back(4),
    v.push_back(2),
    v.push_back(5);
    vector<int>::iterator i(v.begin()), e(v.end());
    v.erase(i+1);
    e--;
    for(;i!=e;i++)cout<<*i<<" ";
}
void zet(){
    set<int>s;
    s.insert(20),
    s.insert(5),
    s.insert(5),
    s.insert(10);
    s.count(5);
    set<int>::iterator i(s.begin()), e(s.end());
    for(;i!=e;i++)cout<<*i<<" ";
    s.erase(2);
    for(;i!=e;i++)cout<<*i<<" ";
}
void mapa(){
    unordered_map<int,int>mm;
    map<string,int>m;
    m["febrero"]=2,
    m["abril"]=27;
    map<string,int>::iterator i(m.begin()), e(m.end());
    for(;i!=e;i++)cout<<i->first<<" "<<i->second<<"\n";
}
int main(){
    zet();
}
