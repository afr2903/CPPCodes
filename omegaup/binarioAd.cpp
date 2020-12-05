#include <iostream>
#include<string>
#include<math.h>
using namespace std;
string n;
int main(){
    while(true){
        cin>>n;
        double d=0,c=0;
        for(double b=n.size()-1;b>=0;b--,c++) if(n[c]=='1') d+=pow(2,b);
        cout.precision(1000);
        cout<<d<<"\n";
    }
}
/*int pasar(bool *b,string &a){
    for(int i=0;i<a.size();i++){
        if(a[i]=='0')b[i]=0;
        else b[i]=1;
    }
    return a.size();
}
int convertir(bool *b,int n,int c){
    if(n==0){
        if(b[c]==0)return 0;
        return 1;
    }
    int x=convertir(b,n-1,c+1);
    if(b[c]==1)x+=pow(2,n);
    return x;
}
int main(){
    string a;
    cin>>a;
    bool b[a.size()];
    int n=pasar(b,a);
    cout<<convertir(b,n-1,0);
}*/
