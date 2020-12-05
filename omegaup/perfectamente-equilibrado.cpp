#include<iostream>
#include<algorithm>
#define MAX 100001
using namespace std;
int n, a[MAX], ans = 999999999;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    if(n==1){
        cout<<"0";
        return 0;
    }

    for(int f=-1; f<=1; f++) for(int s=-1; s<=1; s++){
        a[1]+= f, a[2]+= s;
        int dif = a[2]-a[1];
        int op = abs(f) + abs(s);
        bool balanceado = true;
        int aux = a[2]+dif;
        for(int i=3; i<=n; i++){
            if( abs(aux-a[i])>1 ){
                balanceado = false;
                break;
            }
            if( abs(a[i]-aux) ) op++;
            aux+= dif;
        }
        if(balanceado) ans = min(op, ans);
        a[1]-= f, a[2]-= s;
    }
    if(ans==999999999) cout<<"-1";
    else cout<<ans;
}
