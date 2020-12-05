#include<iostream>
#include<string.h>
using namespace std;
struct Conjunto{
    int cardinalidad;
    int elemento[100];
};
struct PO{
    int x;
    int y;
};
int main(){
    Conjunto A;
    Conjunto B;
    int n,m,b=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>A.elemento[i];
    for(int i=0;i<m;i++)cin>>B.elemento[i];
    PO p[n*m];
    //producto cartesiano
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            p[b].x=A.elemento[i];
            p[b].y=B.elemento[j];
            b++;
        }
    }
    b=0;
    cout<<"A x B={";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"("<<p[b].x<<","<<p[b].y<<");";
            b++;
        }
    }
    cout<<"}";
}
