#include<bits/stdc++.h>
using namespace std;
int b,n;
int c[1000000];
int buscar(){
    for(int i=0;i<b;i++)if(c[i]==n)return b-i-1;
}
int main(){
    char l;
    while(true){
        cin>>l;
        if(l=='D'){
            cin>>c[b];
            b++;
        }
        if(l=='P'){
            cin>>n;
            n=buscar();
            cout<<n<<"\n";
            if(n==0)return 0;
        }
        if(l=='T')b--;
    }
}
