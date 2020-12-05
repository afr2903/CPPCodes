#include<iostream>
#define MAX 10000
using namespace std;
int bit[MAX], a[MAX], n;
void update(int i, int x){
    while(i<=n){
        cout<<i<<" ";
        bit[i]+=x;
        i+=(i&(-i));
    }
}
int query(int i){
    int sum=0;
    while(i>0){
        cout<<i<<" ";
        sum+=bit[i];
        i-=(i&(-i));
    }
    return sum;
}

int main(){
    int x,i;
    bool q;
    cin>>n;
    while(true){
        cin>>q;
        if(q){
            cin>>x>>i;
            update(i,x);
        }
        else{
            cin>>i;
            cout<<"\n"<<query(i)<<"\n";
        }
    }
}
