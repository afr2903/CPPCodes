#include<iostream>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define max 20
#define WA
#define SP
#define AA
#define PO
#define VI
#define SH
char mapa[max][max];
int m(int,int,char,bool);
int main(){
    int y=1,x=2;
    char f,p;
    bool b=0,z=0;
    m(x,y,'^',z);
    while(true){
        f=getch();
        if(f=='w'){
            p='^';
            if(y>1)y--;
        }
        if(f=='a'){
            p='<';
            if(x>2)x--;
        }
        if(f=='s'){
            p='v';
            if(y<18)y++;
        }
        if(f=='d'){
            p='>';
            if(x<19)x++;
        }
        if(f=='z')z=1;
        if(f=='b')return 0;
        if(y==5&&x==5||y==15&&x==5||y==5&&x==15||y==15&&x==15){
            system("cls");
            cout<<"ALLAHU AKBAR!";
            return 0;
        }
        system("cls");
        m(x,y,p,z);
        z=0;
    }
}
int m(int x,int y,char p,bool z){
    for(int d=1;d<21;d++)cout<<"*";
    cout<<"\n";
    for(int c=1;c<19;c++){
        for(int d=1;d<21;d++){
            if(c==y&&d==x)cout<<p;
            if(z){
                if(p=='^'&&c<y&&d==x)cout<<"|";
                if(p=='v'&&c>y&&d==x)cout<<"|";
                if(p=='<'&&d<x&&c==y)cout<<"-";
                if(p=='>'&&d>x&&c==y)cout<<"-";
            }
            if(d==5&&c==5||d==15&&c==5||d==5&&c==15||d==15&&c==15)cout<<"o";
            else if(d==1||d==20)cout<<"*";
            else cout<<".";
        }
        cout<<"\n";
    }
    for(int d=1;d<21;d++)cout<<"*";
    cout<<"\n";
}
