#include<iostream>
#define MAX 1001
using namespace std;
int n, c, l[MAX];
int main(){
    cin>>n>>c;
    for(int i=1; i<=n; i++) cin>>l[i];
    for(int i=1; i<=n; i++){
        c-=l[i];
        if(c<=0){
            cout<<i;
            break;
        }
    }
}
