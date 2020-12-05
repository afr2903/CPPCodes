#include<iostream>
#include<algorithm>
using namespace std;
string p;
char w[10];
long long sz, t;
void f(string x, int b){
    if(x.size()==sz){
        cout<<x<<"\n";
        t++;
        return;
    }
    for(int i=1; i<=sz; i++){
        //cout<<b<<"\n";
        if( b&(1<<i) ) continue;
        f(x+w[i], b+(1<<i));
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>p;
    sz= p.size();
    for(int i=0; i<sz; i++) w[i+1]= p[i];
    //sort(w+1, w+sz+1);
    f("",0);
    cout<<t;
    //for(int i=1; i<=sz; i++) cout<<w[i];

}
