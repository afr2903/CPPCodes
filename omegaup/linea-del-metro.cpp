#include<iostream>
#include<set>
using namespace std;
typedef long long int ll;
set<ll>metro;
set<ll>::iterator it;
ll q, a;
bool t;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>t>>a;
        if(t){
            it=metro.lower_bound(a);
            if(it==metro.end())cout<<-1<<" ";
            else cout<<*it<<" ";
        }
        else metro.insert(a);
    }
}
