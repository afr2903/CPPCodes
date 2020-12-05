#include <iostream>
using namespace std;
unsigned long long int v[50];
unsigned long long int p[50][50];
int binario(unsigned long long int);
int factorial(unsigned long long int);
int conejos(int);
int pascal(int,int);
int main(){
    int i,j;
    cin>>i>>j;
    cout<<pascal(i,j);
}
int pascal(int i,int j){
    if(j==1||j==i)return 1;
    if(p[i][j]!=0)return p[i][j];
    p[i][j]=pascal(i-1,j-1)+pascal(i-1,j);
    return p[i][j];
}
int conejos(int n) {
    if(v[n]!=0)return v[n];
    if(n==0) return 0;
    else if(n==1)return 1;
    else {
        v[n]=conejos(n-1)+conejos(n-2);
        return v[n];
    }
}
int binario(unsigned long long int n){
    if(n<1) return 0;
    binario(n/2);
    cout<<n%2;
}
int factorial(unsigned long long int n){
    int f;
    if(n==0){
        cout<<"0 ";
        return 1;
    }
    f=factorial(n-1);
    cout<<f<<"\n"<<n<<" ";
    return f*n;
}
