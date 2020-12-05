#include<bits/stdc++.h>
using namespace std;
string x,y;
int main(){
    //substring
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char c;
    cin>>x>>c>>y;
    int a=x.size()-1,b=y.size()-1;
    switch(c){
        case '+':
           if(a==b){
                cout<<"2";
                for(a;a>0;a--)cout<<"0";
           } else{
                cout<<"1";
                for(int i=max(a,b)-min(a,b)-1;i>0;i--)cout<<"0";
                cout<<"1";
                for(int i=min(a,b);i>0;i--)cout<<"0";
           }
        break;
        case '-':
            if(a==b)cout<<"0";
            else{
                if(a<b)cout<<"-";
                for(int i=max(a,b)-min(a,b);i>0;i--)cout<<"9";
                for(int i=min(a,b);i>0;i--)cout<<"0";
            }
        break;
        case '*':
            cout<<"1";
            for(int i=a+b;i>0;i--)cout<<"0";
        break;
        case '/':
            if(a>=b)cout<<"1";
            if(a>b)for(int i=a-b;i>0;i--)cout<<"0";
            if(a<b){
                cout<<"0.";
                for(int i=b-a-1;i>0;i--)cout<<"0";
                cout<<"1";
            }
        break;
        case '%':
            if(a>=b)cout<<"0";
            else cout<<x;
        break;
    }
}
