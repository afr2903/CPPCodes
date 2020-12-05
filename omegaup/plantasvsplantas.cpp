#include<iostream>
using namespace std;
struct planta{
    int n;
    int *prev;
    int *next;
    int *right;
}fila[1000001];
int p[1000001],first;
bool control=1;
void comer(int a){
    if(a==0)return;
    int r=*fila[a].right;
    if(r!=0&&a>r){
        control=1;
        fila[a].right=fila[r].right;
        int *p=fila[r].prev;
        int *s=fila[r].next;
        fila[*p].next=s;
        fila[*s].prev=p;
        if(r==first)first=*s;
    }
    comer(*fila[a].next);
}
int main(){
    int time=0,n;
    cin>>n;
    planta actual;
    for(int i=0;i<n;i++)cin>>p[i];
    for(int i=0;i<n;i++){
        actual.n=p[i];
        actual.prev=&fila[p[i]-1].n;
        actual.next=&fila[p[i]+1].n;
        actual.right=&fila[p[i+1]].n;
        fila[p[i]]=actual;
    }
    first=1;
    while(control){
        cout<<". ";
        control=0,time++;
        comer(first);
    }
    cout<<time-1;
}
/*
7
7 5 3 1 6 4 2

3 2 1 0 2 1 0
3 0
*/
