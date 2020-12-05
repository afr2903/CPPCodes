#include <iostream>
#include <fstream>

using namespace std;

string palabra;
 //max 50

/*
    arriba 1
    izuquierda 2
    abajo 3
    derecha 4
*/

char mapa[9][11] = {
                        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
                        {'#', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', '#'},
                        {'#', ' ', '#', '#', '#', ' ', ' ', ' ', '#', ' ', '#'},
                        {'#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#'},
                        {'#', ' ', ' ', '#', '#', ' ', '#', 'M', '#', ' ', '#'},
                        {'#', '#', ' ', '#', '#', ' ', '#', '#', '#', ' ', '#'},
                        {'#', '#', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', '#'},
                        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
                   };

int puntaje[9][11] = {
                        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                        {'#', 8, 9, 10, 11, 12, 13, 14, 15, 16, '#'},
                        {'#', 7, '#', '#', '#', '#', '#', '#', '#', 17, '#'},
                        {'#', 6, '#', '#', '#', 30, 31, 32, '#', 18, '#'},
                        {'#', 5, '#', '#', '#', 29, '#', 33, '#', 19, '#'},
                        {'#', 4, 3, '#', '#', 28, '#', 34, '#', 20, '#'},
                        {'#', '#', 2, '#', '#', 27, '#', '#', '#', 21, '#'},
                        {'#', '#', 1 , '#', '#', 26, 25, 24, 23, 22, '#'},
                        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
                   };

bool vis[9][11];

int x(2), y(7), o(1);
int xL(2), yL(7);

int puntos;
bool llegoAlFinal;

bool terminado;

void puntuar(){
    if(mapa[y][x] == 'M' || mapa[yL][xL] == 'M'){
        llegoAlFinal = true;
    }
    if(llegoAlFinal){
        puntos = 50;
        int mas = 50 - (palabra.size() - 12);
        puntos += max(0, mas);
        double res = (double)puntos;
        res /=100;
        //cout<<res<<endl;
    }
    else {
       if(mapa[y][x] == '#')
        puntos = puntaje[yL][xL];
       else
        puntos = puntaje[y][x];
       //cerr << "No se llego al final " <<  endl;
       double res = (double)puntos;
       res /=100;
       //cout<<res<<endl;
    }
    terminado = true;
}

bool frenteLibre(){

    switch (o){
        case 1:
            if(mapa[y-1][x] != '#')
                return true;
            return false;
        break;
        case 2:
            if(mapa[y][x-1] != '#')
                return true;
            return false;
        break;
        case 3:
            if(mapa[y+1][x] != '#')
                return true;
            return false;
        break;
        case 4:
            if(mapa[y][x+1] != '#')
                return true;
            return false;
        break;
    }
}

void reset(){
    x=2, y=7, o=1;
    xL=2, yL=7;

    puntos=0;
    llegoAlFinal=0;

    terminado=0;
}

void recorrer(int i=0){
    if(i>=palabra.size())
        return;
    if(mapa[y][x] == 'M'){
        llegoAlFinal = true;
        puntuar();
        return;
    }
    if(mapa[y][x] == '#'){
        puntuar();
        llegoAlFinal = true;
        //cerr << "Golem choco" <<  endl;
        return;
    }
    int fin=i+1;
    int ciclos = 0;
    switch (palabra[i]){
        case 'H':
            return;
        break;
        case 'A':
            xL = x;
            yL = y;
            switch (o){
                case 1:
                    y--;
                break;
                case 2:
                    x--;
                break;
                case 3:
                    y++;
                break;
                case 4:
                    x++;
                break;
            }
            recorrer(i+1);
        break;
        case 'I':
            o++;
            if(o==5) o = 1;
            recorrer(i+1);
        break;
        case 'F':
            while(frenteLibre() && !llegoAlFinal){
                recorrer(i+1);
            }
            if(llegoAlFinal)
                return;
            for(; fin<palabra.size() && (palabra[fin]!='H' || ciclos) ;fin++){
                if(palabra[fin]=='E' || palabra[fin]=='F')
                    ciclos++;
                if(palabra[fin] == 'H')
                    ciclos = min(0, ciclos-1);
            }
            if(fin>=palabra.size()){
                if(!llegoAlFinal){
                    puntuar();
                    llegoAlFinal = true;
                }
                return;
            }
            recorrer(fin+1);
        break;
        case 'E':
            while(!frenteLibre() && !llegoAlFinal){
                recorrer(i+1);
            }
            if(llegoAlFinal)
                return;
            for(; fin<palabra.size() && (palabra[fin]!='H' || ciclos) ;fin++){
                if(palabra[fin]=='E' || palabra[fin]=='F')
                    ciclos++;
                if(palabra[fin] == 'H')
                    ciclos = min(0, ciclos-1);
            }
            if(fin>=palabra.size()){
                if(!llegoAlFinal){
                    puntuar();
                    llegoAlFinal = true;
                }
                return;
            }
            recorrer(fin+1);
        break;
        default:
            //cerr << "Letra no valida" << endl;
            xL = x;
            yL = y;
            puntuar();
            llegoAlFinal = true;
        break;
    }
}

char letras[]={' ','A','I','F','E','H'};

bool syntax(string word){
    for(int i=0; i<word.size()-1; i++){
        if((word[i]=='F'||word[i]=='E')&&word[i+1]=='H') return 0;
    }
    int cycle=0;
    for(int i=0; i<word.size(); i++){
        if(word[i]=='F'||word[i]=='E') cycle++;
        if(word[i]=='H') cycle--;
        if(cycle<0) return 0;
    }
    if(cycle!=0) return 0;
    return 1;
}

void bfs(string word){
    if(word.size()==11) return;
    string nw;
    for(int i=1; i<=5; i++){
        nw= word+letras[i];

        if(syntax(nw)){
            palabra=nw;
            reset();
            recorrer();
            cout<<nw<<"\n";
            if(puntos>=100){
                cout<<nw<<"\n";
            }
        }
        bfs(nw);
    }
}

int main() {

    string aux="";
  bfs(aux);
}

/*
    AAIAEIIIFAHH
    AAIAIIIFAHIIIFAHIIIFAHIIIFAHIIIFAHIIIFAHIIIFAH
    AAIAIIIAAAAIIIAAAAAAAAIIIAAAAAAIIIAAAAIIIAAAAIIIAAIIIAA
*/

