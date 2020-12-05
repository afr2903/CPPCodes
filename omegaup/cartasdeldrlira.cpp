#include<iostream>
#define MAX 51
using namespace std;
int n, negro, blanco;
bool cartas[MAX], temp;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>cartas[i];
    temp = false;
    for(int i=1; i<=n; i++, temp= !temp) if(cartas[i]!=temp) blanco++;
    temp = true;
    for(int i=1; i<=n; i++, temp= !temp) if(cartas[i]!=temp) negro++;
    cout<<min(blanco, negro);
}
