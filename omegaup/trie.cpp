#include<iostream>
#define MAX 150001
using namespace std;
struct vertex{
    bool fn;
    int sons[26];
    int leaves;
} trie[MAX];

int node=1, n, m;
string s;
void insert(){
    int p=1;
    for(int i=0; i<s.size(); i++){
        int l=(s[i]-'a');
        if(!trie[p].sons[l]) trie[p].sons[l]=++node;
        trie[p].leaves++;
        p=trie[p].sons[l];
    }
}
int find(){
    int p=1;
    for(int i=0; i<s.size(); i++){
        int l=(s[i]-'a');
        if(!trie[p].sons[l]) return 0;
        p=trie[p].sons[l];
    }
    return trie[p].leaves;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>s;
        insert();
    }
    cin>>m;
    for(int i=1; i<=m; i++){
        cin>>s;
        cout<<find()<<" ";
    }
}
