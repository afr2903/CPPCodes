#include<iostream>
using namespace std;
int main(){
    int fb, pc, ld, st, sp, ob;
    int Sound[6];
    int Img[6];
    int Msg[6];
    int Crt[6];
    int Ort[6];
    Img[0]=8;
    Sound[0]=9;
    Msg[0]=9;
    Crt[0]=9;
    Ort[0]=10;
    Img[1]=7;
    Sound[1]=9;
    Msg[1]=10;
    Crt[1]=8;
    Ort[1]=8;
    Img[2]=9;
    Sound[2]=10;
    Msg[2]=10;
    Crt[2]=9;
    Ort[2]=9;
    Img[3]=8;
    Sound[3]=9;
    Msg[3]=9;
    Crt[3]=9;
    Ort[3]=7;
    Img[4]=7;
    Sound[4]=8;
    Msg[4]=10;
    Crt[4]=9;
    Ort[4]=8;
    Img[5]=9;
    Sound[5]=9;
    Msg[5]=10;
    Crt[5]=10;
    Ort[5]=10;
    for(int x=0; x<6; x++){
        if(x==0){
            fb=Img[x]+Sound[x]+Msg[x]+Crt[x]+Ort[x];
        }
        if(x==1){
            pc=Img[x]+Sound[x]+Msg[x]+Crt[x]+Ort[x];
        }
        if(x==2){
            ld=Img[x]+Sound[x]+Msg[x]+Crt[x]+Ort[x];
        }
        if(x==3){
            st=Img[x]+Sound[x]+Msg[x]+Crt[x]+Ort[x];
        }
        if(x==4){
            sp=Img[x]+Sound[x]+Msg[x]+Crt[x]+Ort[x];
        }
        if(x==5){
            ob=Img[x]+Sound[x]+Msg[x]+Crt[x]+Ort[x];
        }
    }
}
