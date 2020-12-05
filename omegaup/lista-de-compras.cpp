#include<iostream>
#include<set>
#include<string>
using namespace std;
set< pair<string,int> >lista;
set< pair<string,int> >::iterator b;
pair<string,int>producto;
int main(){
    int n,k;
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=0; i<k; i++){
        cin>>producto.first>>producto.second;
        lista.insert(producto);
    }
    for(;b!=lista.end(); b++){
        producto=*b;
        cout<<producto.first<<" "<<producto.second<<"\n";
    }
}
