#include<iostream>
#include<string>
using namespace std;
string player;
int x=0;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>player;
    for(int i=0; i<player.size(); i++){
        player[i]=='1'? x>0? x++:x=1 : x<0? x--:x=-1;
        if(x==7||x==-7) break;
    }
    if(x==7||x==-7) cout<<"YES";
    else cout<<"NO";
}
