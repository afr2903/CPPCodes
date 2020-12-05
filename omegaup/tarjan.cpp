#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#define MAX 1000

using namespace std;
int t;
bool vis[MAX], enPila[MAX];
int disc[MAX], minDisc[MAX];
stack<int>pila;
vector<int>hijo[MAX];

void tarjan(int nodo){
    if(vis[nodo]) return;
    vis[nodo]=1;
    pila.push(nodo);
    enPila[nodo]=1;
    disc[nodo]= minDisc[nodo]= t++;

    for(int i=0; i<hijo[nodo].size(); i++){
        tarjan(hijo[nodo][i]);
        if(enPila[hijo[nodo][i]]) minDisc[nodo]= min(minDisc[hijo[nodo][i]], minDisc[nodo]);
    }
    if(disc[nodo]==minDisc[nodo]){
        int x=pila.top();
        do{
            pila.pop();
        }while(x!=nodo);
    }
}
int main(){

}
