#include<bits/stdc++.h>
using namespace std;

map<char, vector<int> >p;

string w;
bool b(int i,int f,char c){
    int j=0,k=p[c].size(),a;
    while(j<k){
        a=(j+k)/2;
        if(p[c][a]>=i&&p[c][a]<=f)return 1;
        else if(p[c][a]<i) j=a+1;
        else if(p[c][a]>f) k=a-1;
    }
    a=(j+k)/2;
    if(p[c][a]>=i&&p[c][a]<=f)return 1;
    return 0;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    cin>>w;
    int n,i,t;
    for(int j=0;j<w.size();j++)p[w[j]].push_back(j);
    char c;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>c>>i>>t;
        if(p[c].size()==0)cout<<"0"<<"\n";
        else cout<<b(i,i+t-1,c)<<"\n";
    }
}

