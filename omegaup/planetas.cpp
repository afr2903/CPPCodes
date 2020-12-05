#include<iostream>
#include<algorithm>
using namespace std;
int n, x[1001];
double F(double p){
    double force=0;
    for(int i=0; i<n; i++) force+= 1/(x[i]-p);
    return force;
}
double m(int i){
    double b=x[i], e=x[i+1], h;
    for(int j=0; j<25; j++){
        h=(b+e)/2;
        if(F(h)<0) b=h;
        else e=h;
    }
    return h;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++) cin>>x[i];
    sort(x,x+n);
    printf("%d\n",n-1);
    for(int i=0; i<n-1; i++) printf("%.3lf ",m(i));
}
