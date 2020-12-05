#include<iostream>
#include<algorithm>
using namespace std;
/*bool mayor(int &b,int &c){
    if(b>c)return 1;
    return 0;
}
int main(){
    int a[]={2,3,6,4,999,0};
    sort(a,&a[5]+1,mayor);
    for(int i=0;i<6;i++)cout<<a[i]<<" ";
}*/
int x='a'-'A';
bool mayus(string &a,string &b){
    for(int i=0;i<max(a.size(),b.size());i++){
        char o=a[i],p=b[i];
        if(o<'a')o+=x;
        if(p<'a')p+=x;
        if(o==p)continue;
        if(o>p)return 0;
        if(o<p)return 1;
    }
    if(a.size()>b.size())return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    string w[n];
    for(int i=0;i<n;i++)cin>>w[i];
    sort(w,w+n,mayus);
    for(int i=0;i<n;i++)cout<<"\n"<<w[i];
}
/*struct p{
    int x,y;
};
bool m(p &b,p &c){
    if(b.x>c.x)return 0;
    if(b.x==c.x)if(b.y>c.y)return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    p a[n];
    for(int i=0;i<n;i++)cin>>a[i].x>>a[i].y;
    sort(a,a+n,m);
    for(int i=0;i<n;i++)cout<<"\n"<<a[i].x<<" "<<a[i].y;
}*/
