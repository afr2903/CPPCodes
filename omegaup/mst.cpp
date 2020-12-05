#include<iostream>
#include<algorithm>
#include<vector>
#define MAX 10000
using namespace std;
vector< pair<int, pair<int,int> > >aristas;
vector< pair<int,int> >tree;
int parent[MAX];

int find(int a){
    if(parent[a]==a)return a;
    return parent[a]=find(a);
}
void join(int a, int b){
    parent[find(a)]=find(b);
}

void mst(){
    sort(aristas.begin(), aristas.end());
    for(int i=1; i<=aristas.size(); i++){
        if(find(aristas[i].second.first)!=find(aristas[i].second.second)){
            join(aristas[i].second.first, aristas[i].second.second);
            tree.push_back(aristas[i].second);
        }

    }
}

int main(){

}
