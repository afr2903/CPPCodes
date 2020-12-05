#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
#define up 72
#define left 75
#define down 80
#define right 77
#define enter 13
void menu(int i){
    i==0?cout<<">":cout<<" ";
    cout<<"Regla y resolver serie\n";
    i==1?cout<<">":cout<<" ";
    cout<<"Serie a partir de regla\n";
}
void regla(){
    system("cls");
    float o,t;
    int j,n;
    cin>>o>>t;
    t-=o;
    cout<<"d= "<<t<<"\n\n";
    o-=t;
    cout.precision(50);
    cout<<t<<"n";
    if(o>0)cout<<"+";
    if(o!=0)cout<<o<<"\n";
    cout<<"\nNumero de terminos: ";
    cin>>j;
    for(int i=0;i<j;i++){
        cout<<"\nn= ";
        cin>>n;
        cout<<(t*n)+o<<"\n";
    } n=getch();

}
int main(){
    int i=0;
    char c;
    while(true){
        system("cls");
        menu(i);
        c=getch();
        if(c==down)i<1?i++:i=0;
        else if(c==up)i>0?i--:i=1;
        else if(c==enter){
            switch(i){
                case 0:
                    regla();
                break;
            }
        }
    }
}
