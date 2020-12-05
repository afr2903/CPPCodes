#include<iostream>
#include<math.h>
using namespace std;
typedef unsigned long long ull;
ull m, k, aux=1, maxf, sum, num;
ull fives[20];

ull pot(int x){
    ull temp = 1;
    for(int i=1; i<=x; i++) temp*= 5;
    return temp;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>m;
    for(int i=1; i<=17; i++){
        fives[i] = fives[i-1] + pot(i-1);
        //cout<<fives[i]<<" ";
    }
    for(int i=1; i<=17; i++){
        if(m > fives[i]) continue;
        if(m == fives[i]){
            cout<<pot(i);
            return 0;
        }
        maxf = i-1, sum = fives[i-1];
        num = pot(maxf);
        break;
    }
    for(int i=maxf; i>0; i--){
        if( sum+fives[i] > m ) continue;
        while(true){
            if( sum+fives[i] > m ) break;
            sum+= fives[i];
            num+= pot(i);
        }
    }
    cout<<num;
}
