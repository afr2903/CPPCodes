#include<bits/stdc++.h>
using namespace std;
string w;
bool l[26];
bool checar(){
    bool b=1;
    for(int i=0;i<26;i++){
        if(l[i]==0)b=0;
        l[i]=0;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w;
        for(int j=0;j<w.size();j++){
            l[w[j]-'a']=1;
        }
        if(checar())cout<<"PERFECT"<<"\n";
        else cout<<"NO WAY"<<"\n";
    }
}
