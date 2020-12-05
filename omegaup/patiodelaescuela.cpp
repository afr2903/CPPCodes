#include<iostream>
using namespace std;
int main(){
    int o[4],t[4],x;
    cin>>o[0]>>o[1]>>o[2]>>o[3]>>t[0]>>t[1]>>t[2]>>t[3];
    if(max(o[0],t[0])>min(o[2],t[2])&&max(o[1],t[1])>min(o[3],t[3])){
        x=(o[2]-o[0])*(o[3]-o[1])+(t[2]-t[0])*(t[3]-t[1]);
        cout<<x;
        return 0;
    }
    x=(max(t[2],o[2])-min(t[0],o[0]))*(max(t[3],o[3])-min(t[1],o[1]));
    x-=(max(t[0],o[0])-min(t[0],o[0]))*(max(t[3],o[3])-min(t[3],o[3]));
    x-=(max(t[1],o[1])-min(t[1],o[1]))*(max(t[2],o[2])-min(t[2],o[2]));
    cout<<x;
}
