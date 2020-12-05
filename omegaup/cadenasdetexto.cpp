#include<bits/stdc++.h>
using namespace std;
string w;
/*int main(){
    int n;
    cin>>n;
    char c=34;
    getline(cin,w,'\n');
    for(int i=0;i<n;i++){
        getline(cin,w,'\n');
        cout<<c<<w<<c<<" tiene "<<w.size()<<" caracteres"<<"\n";
    }
}*/
int main(){
    int n,i,t;
    bool x;
    char c;
    cin>>w>>n;
    for(int j=0;j<n;j++){
        x=0;
        cin>>c>>i>>t;
        for(int k=i;k<i+t;k++){
            if(w[k]==c){
                x=1;
                break;
            }
        }
        cout<<x<<"\n";
    }
}
/*string a;
int main(){
    bool b;
    int x=0;
    getline(cin,a,'\n');
    getline(cin,w,'\n');
    for(int i=0;i<w.size();i++){
        b=0;
        if(w[i]==a[0]||w[i]==a[0]+'a'-'A'){
            for(int j=1,k=i+1;j<a.size();j++,k++){
                if(a[j]!=w[k]){
                    b=1;
                    break;
                }
            }
            if(!b)x++;
        }
    }
    cout<<x;
}*/
/*int main(){
    cin>>w;
    bool b=0;
    for(int i=0;i<w.size();i++)if(w[i]=='B')b=!b;
    if(b)cout<<"S";
    else cout<<"N";
}*/
/*int main(){
    cin>>w;
    int n=0;
    for(int i=0;i<w.size();i++){
        if(w[i]=='d')n++;
    }
    cout<<n;
}*/
/*int main(){
    int n;
    bool b,z=0,o=0;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b)o=!o;
        else z=!z;
    }
    if(z){
        for(int i=w.size()-1;i>=0;i--){
            if(o){
                if(w[i]>='A'&&w[i]<='Z')w[i]+='a'-'A';
                else w[i]-='a'-'A';
            }
            cout<<w[i];
        }
    }
    else{
        for(int i=0;i<w.size();i++){
            if(o){
                if(w[i]>='A'&&w[i]<='Z')w[i]+='a'-'A';
                else w[i]-='a'-'A';
            }
            cout<<w[i];
        }
    }
}*/
/*int main(){
    getline(cin,w,'\n');
    for(int i=0;i<w.size();i++){
        if(w[i]>='A'&&w[i]<='Z')cout<<w[i];
        if(w[i]>='a'&&w[i]<='z')cout<<w[i];
        if(w[i]==32)cout<<w[i];
    }
}*/
/*int main(){
    int n;
    bool b;
    cin>>n;
    for(int i=0;i<n;i++){
        b=0;
        cin>>w;
        for(int j=0,k=w.size()-1;j<k;j++,k--){
           if(w[j]!=w[k]){
                b=1;
                break;
           }
        }
        if(b==0)cout<<"P"<<"\n";
        else cout<<"NP"<<"\n";
    }
}*/
