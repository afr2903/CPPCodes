#include<iostream>
#include<set>
using namespace std;
int n, a, q, k, pos;
char c;
set<int>alumnos;
set<int>::iterator it;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        alumnos.insert(a);
    }
    cin>>q;
    for(int i=1; i<=q; i++){
        cin>>c>>k;
        if(c=='M'){
            if(k==1) pos--;
            else pos++;
            if(pos<0) pos+=n;
            pos%=n;
        }
        if(c=='Q'){
            if(k==1) it=alumnos.end(), it--;
            else it=alumnos.begin();
            alumnos.erase(*it);
        }
        if(c=='L'){
            it=alumnos.find(k);
            if(it==alumnos.end()){
                cout<<"No Laurencio\n";
                continue;
            }
            it=it-alumnos.begin();
            cout<<*it<<"\n";
        }
    }
}
