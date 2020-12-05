#include<iostream>
using namespace std;
#define MAX 1000

int parent[MAX];
int raiz(int x){
    if(x==parent[x])return x;
    return parent[x]=raiz(parent[x]);
}
bool pertenencia(int a,int b){
    return raiz(a)==raiz(b);
}
int main(){

}
