#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int random, ans, vidas=5, a;
    srand(time(NULL));
    random=1+rand()%(101-1);
    while(vidas>0){
        cout<<"Escoge un numero:\n"<<"1/ Juego de adivinar\n"<<"2/ Vidas restantes\n"<<"3/ Numeros que has escogido\n";
        cin>>a;
        if(a==1){
            cout<<"Adivina en que numero estoy pensando :)\n";
            cin>>ans;
            if(ans==random){
                cout<<"Adivinaste!!:)";
                return 0;
            }
            else{
                if(vidas>1){
                    if(ans<random){
                        cout<<"El numero que escogiste es menor\n";
                        vidas--;
                    }
                    else{
                        cout<<"El numero que escogiste es mayor\n";
                        vidas--;
                    }
                }
            }
        }
        if(a==2){
            cout<<vidas;
        }
        if(a==3){

        }
    }
    cout<<"Perdiste :(\n";
    cout<<"El numero correcto era "<<random;
    return 0;
}
