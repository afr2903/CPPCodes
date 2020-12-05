#include<iostream>
#define MAX 2001
using namespace std;
struct st{
    int h,l;
}a;
int n, h, l, s=2, ms=0;
int o=0, t=1;

st dp[2][MAX];
int data[MAX];
int maxi[MAX];
void buscar(int cs, int h, int l, int i, bool b){
    if(i>n){
        ms=max(cs,ms);
        return;
    }
    if(b){
        if(cs==0){
            buscar(cs+1, data[i], data[i], i+1, 1);
            buscar(cs+1, data[i], data[i], i+1, 0);
            return;
        }
        if(data[i]<l){
            if(maxi[i]>=cs+1)return;
            buscar(cs+1, h, data[i], i+1, 1);
            buscar(cs+1, h, data[i], i+1, 0);
            maxi[i]=cs+1;
        }
        else if(data[i]>h){
            if(maxi[i]>=cs+1)return;
            buscar(cs+1, data[i], l, i+1, 1);
            buscar(cs+1, data[i], l, i+1, 0);
            maxi[i]=cs+1;
        }
    }
    else{
        if(maxi[i]>=cs)return;
        buscar(cs, h, l, i+1, 1);
        buscar(cs, h, l, i+1, 0);
        maxi[i]=cs;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>data[i];
    buscar(0, -1000000000, 1000000000, 1, 1);
    buscar(0, -1000000000, 1000000000, 1, 0);
    cout<<ms;
}
