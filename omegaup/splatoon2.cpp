#include <iostream>
#include <string>
#define MAX 1005

using namespace std;
struct momento{
    int tiempo;
    int posicion;
    int disparos;
};

string camino;
bool visita[MAX][MAX];
momento cola[MAX][MAX];
int inicio[MAX], fin[MAX];
int in(0), fn(0);
void push(int d, int posicion=0, int tiempo=0){

    int i;
    for(i=in; cola[0][i].tiempo!=tiempo && i!=fn; i+1==MAX?i=0:i++ );
    cola[fin[i]][i].disparos=d;
    cola[fin[i]][i].tiempo=tiempo;
    cola[fin[i]++][i].posicion=posicion;
    cout<<fin[i]<<" "<<i<<" "<<in<<" "<<fn<<" "<<"\n";
    if(fin[i]==MAX)fin[i]=0;

    if(i==fn){
        fn++;
        if(fn==MAX)fn=0;
    }

}
void push(momento p){
    int i;
    for(i=in; cola[0][i].tiempo!=p.tiempo && i<in; i+1==MAX?i=0:i++ );

    cola[fin[i]++][i]=p;

    if(fin[i]==MAX)fin[i]=0;

    if(i==fn){
        fn++;
        if(fn==MAX)fn=0;
    }
}
momento pop(){
    int i=inicio[in]++;
    int j=in;
    if(inicio[in]==MAX)inicio[in]=0;
    if(inicio[in]==fin[in]){
        if(in!=fn){
            in++;
            if(in==MAX)in=0;
        }
    }
    return cola[i][j];
}
bool isEmpty(){
    if(in==fn && inicio[in]==fin[fn])return true;
    return false;
}

int main(){
    int n, d, maximaDistancia;
    cin>>n>>d;
    cin>>camino;
    push(d);
    momento p;
    while(!isEmpty()){

        p=pop();

        //VISITA
        if(visita[p.disparos][p.posicion])continue;
        visita[p.disparos][p.posicion]=true;

        //CHECAR SI LLEGO
        if(p.posicion>=n-1){
            cout<<p.tiempo<<"\n";
            return 0;
        }

        //CALCULAR DISTANCIA
        if(camino[p.posicion]=='N'){
            maximaDistancia=4;
        }
        else if(camino[p.posicion]=='-'){
            maximaDistancia=3;
        } else maximaDistancia=2;

        //CAMINAR
        for(int i=1; i<=maximaDistancia && (p.posicion+i)<n; i++){
            push(p.disparos, p.posicion+i, p.tiempo+1);
            if(camino[p.posicion]!=camino[i+p.posicion])break;
        }

        //SALTAR
        push(p.disparos, p.posicion+maximaDistancia-1, p.tiempo+1);
        //DISPARAR
        if(p.disparos>0){
            p.disparos--;

            push(p.disparos, p.posicion+4, p.tiempo+1);

            //POSBILES POSICIONES EN EL SIGUIENTE MOVIMIENTO
            push(p.disparos, p.posicion+5, p.tiempo+2);
            push(p.disparos, p.posicion+6, p.tiempo+2);


        }
    }
}
