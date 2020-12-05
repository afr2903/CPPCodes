#include<iostream>
using namespace std;
int n,cambios;
struct edificio{
    edificio *sig;
    edificio *prev;
    int h;
};
void memoria(edificio **p){
    *p=new(edificio);
    (*p)->sig=NULL;
    (*p)->prev=NULL;
}
void agregar(edificio *p,int hi){
    memoria(&(p->sig));
    (p->sig)->h=hi;
    (p->sig)->prev=p;
}
int main(){
    edificio *raiz;
    edificio *p;
    int hi;
    cin>>n>>hi;
    memoria(&raiz);
    raiz->h=hi;
    p=raiz;
    for(int i=1; i<n; i++){
        cin>>hi;
        agregar(p,hi);
        p=p->sig;
    }
    agregar(p,0);
    p=raiz->sig;
    for(int i=2; i<n; i++){
        if((p->h)>(p->prev)->h){
            p=p->sig;
            continue;
        }
        cambios++;

        p->h+=(p->sig)->h;
        p->sig=(p->sig)->sig;
        if(((p->sig)->sig)!=NULL) ((p->sig)->sig)->prev=p;
    }
    for(;p!=raiz; p=p->prev){
        if((p->h)>(p->prev)->h)continue;
        cambios++;
        (p->prev)->h=(p->prev)->h +p->h;
        /*(p->prev)->sig=p;
        if((p->sig)!=NULL) (p->sig)->prev=p->prev;*/
    }
    cout<<cambios;
}
