/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"COMPUESTO";
            return 0;
        }
    }
    cout<<"PRIMO";
}*/
#include<bits/stdc++.h>
using namespace std;
string n;
int main(){
    cin>>n;
    for(int i=0;i<n.size()-1;i++){
        if(n[i]=='1'&&n[i+1]=='3'){
            cout<<n<<" es de Mala Suerte";
            return 0;
        }
    }
    cout<<n<<" NO es de Mala Suerte";
}
