#include<iostream>
#include<set>
#define x first
#define y second
using namespace std;
int n, k;
pair<int,int>coord;
set< pair<int,int> >ships;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>coord.x>>coord.y;
        ships.insert(coord);
    }
    for(int i=1; i<=k; i++){
        cin>>coord.x>>coord.y;
        if(ships.find(coord)!=ships.end()) cout<<"0\n";
        else cout<<"1\n";
    }
}
