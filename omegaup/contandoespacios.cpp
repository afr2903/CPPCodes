#include<iostream>
#include<string>
using namespace std;
string w;
int main(){
    int n;
    ios_base::sync_with_stdio();
    cin.tie(0);
    cin>>n;
    getline(cin,w,'\n');
    for(int i=0,e=0;i<n;i++,e=0){
        getline(cin,w,'\n');
        for(int j=0;j<w.size();j++){
            if(w[j]==' ')e++;
        }
        cout<<e<<"\n";
    }
}
