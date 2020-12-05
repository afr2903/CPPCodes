#include <iostream>  // Cargo librer�as (colecciones de funciones ya hechas que hacen cositas): "iostream" me permite sacar texto
#include <cmath>     // y n�meros por el terminal, para que puedas ver el valor de pi, y "cmath" es una colecci�n de funciones
#include <fstream>   // matem�ticas que necesito, como elevar al cuadrado y hacer la raiz cuadrada.
using namespace std;  // A efectos pr�ticos, esto es para no tener que poner "std" todo el rato.

int main(){           // �Comenzamos!
    long long int n;         // N�MERO DE LADOS DEL POL�GONO. �CAMBIAD ESTO!
    cout<<"Numero de lados del poligono: ";
    cin>>n;

    double r=1;  // Este es RADIO DE LA CIRCUNFERENCIA. Puedes cambiarlo; el valor de pi no se ve afectado.

    double A;    // Defino los Per�metros de los pol�gonos inscritos y circunscritos.
    double B;

    A=4*sqrt(2)*r;  // Cargo los per�metros de un CUADRADO inscrito (A) y circunscrito (B). Estos valores pueden ser f�cilmente
    B=8*r;          // obtenidos con el teorema de pitagoras, no pi required.

    double m=4;     // Este es el n�mero de lados de los pol�gonos con los que estamos trabajando.

    while (m*2<=n) {  // BUCLE. Si el n�mero de lados del pol�gono a generar supera el n�mero impuesto por usuario, para.

        B=2*A*B/(A+B);      // Calculo de los per�metros con el doble de lados. A cada vuelta los valores de A y B se sobreeescriben.
        A=sqrt(A*B);

        m=m*2;              // El n�mero de lados se duplica en cada vuelta.

    }                 // Fin de BUCLE

    double pi=(  A/2/r + B/2/r  )/2;         // Calculamos pi como la media de los valores de pi de cada perimetro...
    double err = abs(  A/2/r - B/2/r  )/2;   // ... y el error como la resta.

    cout.precision(100); // Estos son el n�mero de digitos que quiero que se expulsen por pantalla. Puedes aumentarlo si quieres.

    // Sacamos los resultados por pantalla para disfrute del usuario:

    cout<<endl<<"Con un poligono de "<<m<<" lados, obtenemos:";
    cout<<endl<<"Pi = "<<pi<<"  +/-  "<<err;
    cout<<endl<<"o, dicho de otra manera, el valor de pi se encuentra entre";
    cout<<endl<<pi+err<<"   y   "<<pi-err;


    return 0;  // Y hemos terminado. Cerramos el chiringuito.

}


