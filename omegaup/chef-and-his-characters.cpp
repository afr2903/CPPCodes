#include<iostream>
using namespace std;
int main(){
    int t,l;
    string s;
    bool c,h,e,f;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        l=0;
        for(int j=0;j<s.size()-4;j++){
            if(s[j]=='c'||s[j]=='h'||s[j]=='e'||s[j]=='f'){
                //cout<<j<<" ";
                c=0,h=0,e=0,f=0;
                for(int k=j;k<j+4;k++){
                    if(s[k]=='c')c=1;
                    else if(s[k]=='h')h=1;
                    else if(s[k]=='e')e=1;
                    else if(s[k]=='f')f=1;
                    else break;
                }
                if(c&&h&&e&&f)l++;
            }
        }
        if(l)cout<<"lovely "<<l<<"\n";
        else cout<<"normal\n";
    }
}
