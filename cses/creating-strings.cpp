#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string w;
vector<string> perm;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>w;
    sort(w.begin(), w.end());
    do{
        perm.push_back(w);
    }while(next_permutation(w.begin(), w.end()));
    cout<<perm.size()<<"\n";
    for(auto x:perm){
        cout<<x<<"\n";
    }
}
