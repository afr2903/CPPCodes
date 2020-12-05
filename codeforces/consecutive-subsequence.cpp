#include<iostream>
#include<set>
#include<vector>
#define MAX 200001
using namespace std;
struct o{
    int v;
    int siz;
    vector<int>sub;
}a[MAX];
set<int>past;
int n, m=1;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i].v;
    past.insert(a[1].v);
    for(int i=2; i<=n; i++){
        past.insert(a[i].v);
        if(past.find(a[i].v-1)==past.end())continue;
        for(int j=i-1; j>0; j--){
            if(a[i].v-1!=a[j].v) continue;
            a[i].siz=a[j].siz+1;
            a[i].sub=a[j].sub;
            a[i].sub.push_back(i);
        }
    }
    for(int i=1; i<=n; i++) if(a[i].siz>a[m].siz) m=i;
    cout<<a[m].siz+1<<"\n";
    for(int i=0; i<a[m].sub.size(); i++) cout<<a[m].sub[i]<<" ";
}
