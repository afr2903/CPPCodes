#include<iostream>
#include<cmath>
#define MAX 2001
#define DEC 10000000000000
using namespace std;
int n,v,r;
int d[MAX], t[MAX];
bool compare(double cv){
    cv/=DEC;
    for(int i=1; i<=n; i++)
        if(ceil((float)d[i]/(cv*r))!=t[i]) return 0;
    return 1;
}
void binary(){
    double in=1, fn=v, md;
    fn*=DEC;
    while(in<fn){
        md=(in+fn)/2;
        if(compare(md)) fn=md;
        else in=md+1;
        //cout<<in<<" "<<fn<<"\n";
    }
    //cout<<md<<"\n";
    md/=DEC;
    printf("%.9lf ",md);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout.precision(10);
    cin>>n>>v>>r;
    for(int i=1; i<=n; i++) cin>>d[i];
    for(int i=1; i<=n; i++) t[i]= ceil((float)d[i]/(v*r));
    binary();
}
