#include<iostream>
#define MAX 1001
#include<set>
#include<unordered_map>
using namespace std;
int n;
string s, cr;
set<char>r;
set<char>::iterator it;
unordered_map<string,bool>root;
int q;
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>s;
        for(int j=0; j<s.size(); j++) r.insert(s[j]);
        it=r.begin();
        cr="";
        for(; it!=r.end(); it++) cr+=*it;
        cout<<cr<<"\n";
        if(!root[cr]){
            root[cr]=1;
            q++;
        }
        r.clear();
    }
    cout<<q;
}
