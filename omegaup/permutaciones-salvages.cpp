#include<iostream>
#include<algorithm>
using namespace std;
int c[9];
int T,t, c1,c2,c3, m;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<9; i++) cin>>c[i];
    sort(c,c+9);
    do{
        c1=c[0]+c[1]+c[2];
        c2=c[3]+c[4]+c[5];
        c3=c[6]+c[7]+c[8];
        t=min(c1,min(c2,c3));
        T=max(c1,max(c2,c3));
        m=min(T-t,m);
        //for(int i=0; i<9; i++) cout<<c[i];
        //cout<<"\n";
    } while( next_permutation(c,c+9) );
    cout<<m;
}
