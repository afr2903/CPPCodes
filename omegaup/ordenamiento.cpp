#include <iostream>
using namespace std;
int main(){
    int n, i, m, x, b, c;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    x, c, i, b=0;
    for(int b=0; b<n; b++){
        m=a[b];
        for(int i=b; i<n; i++){
            x=a[i];
            if(x<m){
                c=m;
                m=x;
                a[i]=c;
            }
        }
        a[b]=m;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}
