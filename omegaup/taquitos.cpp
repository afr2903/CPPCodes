#include<iostream>
#include<queue>
using namespace std;
int n, q, t, pos, tacos;
queue<int>line;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>q;
        if(q==1){
            cin>>t;
            line.push(t);
        }
        if(q==2){
            if(!line.empty()){
                tacos+=line.front();
                line.pop();
            }
        }
        if(q==3) line.empty()? cout<<"0\n": cout<<line.size()<<"\n";
        if(q==4) cout<<tacos<<"\n";
    }
}
