#include<iostream>
using namespace std;
int x1, x2, s=1, xi, xj, xt;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>x1>>x2;
    xi=x2, xj=(x1+x2)%10;
    cout<<x1<<" "<<x2<<" "<<xj<<" ";
    while(xi!=x1 || xj!=x2){
        xt= xj, s++;
        xj= (xi+xj)%10, xi= xt;
        cout<<xj<<" ";
    }
    cout<<"\n"<<s;
}
