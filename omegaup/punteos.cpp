#include<bits/stdc++.h>
using namespace std;
void entrada(int &n){
    cin>>n;
}
void salida(string *a,int &n){
    if(n<0){
        int m=-n%7;
        m>0?cout<<a[7-m]:cout<<a[0];
        return ;
    }
    cout<<a[n%7];
}
int main(){
    int n;
    string a[7]={"domingo","lunes","martes","miercoles","jueves","viernes","sabado"};
    entrada(n);
    salida(a,n);

}
