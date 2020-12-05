#include<bits/stdc++.h>
using namespace std;
string w;
int s;
bool palindromo(int i,int f){
    for(int c=0;c<(s/2);i++,f--,c++){
        if(f<0)f=s-1;
        if(i==s)i=0;
        if(w[i]!=w[f])return 0;
    }
    return 1;
}
int main(){
    cin>>w;
    s=w.size();
    if(palindromo(0,s-1)){
        cout<<"Circular";
        return 0;
    }
    for(int i=1,f=0;i<s;i++,f++){
        if(palindromo(i,f)){
            cout<<"Circular";
            return 0;
        }
    }
    cout<<"No Circular";
}
