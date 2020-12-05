#include<iostream>
#include<set>
#include<queue>
#include<map>
using namespace std;
#define MAX 40321
struct p{
    string current;
    string steps;
}a,n;
set<string>vis;
queue<p>q;
string start="12345678", target;
void rubik(){
    n={"        ",""};
    a={start,""};
    vis.insert(start);
    q.push(a);
    while(!q.empty()){
        a=q.front();
        q.pop();
        for(int i=0,j=7; i<8; i++,j--) n.current[i]=a.current[j];
        if(vis.find(n.current)==vis.end()){
            vis.insert(n.current);
            n.steps=a.steps+'A';
            if(n.current==target)return;
            q.push(n);
        }

        n.current[0]=a.current[3], n.current[7]=a.current[4];
        for(int i=1; i<=3; i++) n.current[i]=a.current[i-1];
        for(int i=6; i>=4; i--) n.current[i]=a.current[i+1];
        if(vis.find(n.current)==vis.end()){
            vis.insert(n.current);
            n.steps=a.steps+'B';
            if(n.current==target)return;
            q.push(n);
        }

        n.current=a.current;
        swap(n.current[1],n.current[2]); swap(n.current[5],n.current[6]);
        swap(n.current[1],n.current[5]);
        if(vis.find(n.current)==vis.end()){
            vis.insert(n.current);
            n.steps=a.steps+'C';
            if(n.current==target)return;
            q.push(n);
        }

    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    char c;
    for(int i=0; i<8; i++){
        cin>>c;
        target+=c;
    }
    rubik();
    cout<<n.steps.size();
    for(int i=0; i<n.steps.size(); i++) cout<<"\n"<<n.steps[i];
}
