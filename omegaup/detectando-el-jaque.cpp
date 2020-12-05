#include<iostream>
using namespace std;
int reyBlancoX, reyBlancoY, reyNegroX, reyNegroY;
char board[10][10];

bool check(char target, int x, int y){
    if( x<1 || y<1 || x>8 || y>8 ) return false;
    if( board[y][x]==target ) return true;
    return false;
}
bool king(int kX, int kY, int kS){
    if(kS) if( check('P'+kS, kX+1, kY+1) || check('P'+kS, kX-1, kY+1) ) return true;
    else if( check('P'+kS, kX+1, kY-1) || check('P'+kS, kX-1, kY-1) ) return true;
    if( check('C'+kS, kX+1, kY-2) || check('C'+kS, kX+1, kY+2) || check('C'+kS, kX-1, kY-2) || check('C'+kS, kX-1, kY+2) || check('C'+kS, kX+2, kY-1) || check('C'+kS, kX+2, kY+1) || check('C'+kS, kX-2, kY-1) || check('C'+kS, kX-2, kY+1) ) return true;
    if( check('R'+kS, kX+1, kY-1) || check('R'+kS, kX+1, kY+1) || check('R'+kS, kX-1, kY-1) || check('R'+kS, kX-1, kY+1) || check('R'+kS, kX+1, kY) || check('R'+kS, kX-1, kY) || check('R'+kS, kX, kY+1) || check('R'+kS, kX, kY-1) ) return true;
    ////////////////////////////////////////////////////////////////////////
    for(int i= kY-1; i>=1; i--){
        if( check( 'T'+kS, kX, i) || check( 'E'+kS, kX, i) ) return true;
        else if( !check( '.', kX, i) ) break;
    }
    for(int i= kY+1; i<=8; i++){
        if( check( 'T'+kS, kX, i) || check( 'E'+kS, kX, i) ) return true;
        else if( !check( '.', kX, i) ) break;
    }
    for(int j= kX-1; j>=1; j--){
        if( check( 'T'+kS, j, kY) || check( 'E'+kS, j, kY) ) return true;
        else if( !check( '.', j, kY) ) break;
    }
    for(int j= kX+1; j<=8; j++){
        if( check( 'T'+kS, j, kY) || check( 'E'+kS, j, kY) ) return true;
        else if( !check( '.', j, kY) ) break;
    }
    ////////////////////////////////////////////////////////////////////
    for(int i= kY-1, j= kX-1; i>=1&&j>=1; i--,j--){
        if( check( 'A'+kS, j, i) || check( 'E'+kS, j, i) ) return true;
        else if( !check( '.', j, i) ) break;
    }
    for(int i= kY-1, j= kX+1; i>=1&&j<=8; i--,j++){
        if( check( 'A'+kS, j, i) || check( 'E'+kS, j, i) ) return true;
        else if( !check( '.', j, i) ) break;
    }
    for(int i= kY+1, j= kX-1; i<=8&&j>=1; i++,j--){
        if( check( 'A'+kS, j, i) || check( 'E'+kS, j, i) ) return true;
        else if( !check( '.', j, i) ) break;
    }
    for(int i= kY+1, j= kX+1; i<=8&&j<=8; i++,j++){
        if( check( 'A'+kS, j, i) || check( 'E'+kS, j, i) ) return true;
        else if( !check( '.', j, i) ) break;
    }
    if( kX==0 && kY==0 ) return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    for(int i=1; i<=8; i++){
        for(int j=1; j<=8; j++){
            cin>>board[i][j];
            if(board[i][j]=='R') reyBlancoX= j, reyBlancoY= i;
            if(board[i][j]=='r') reyNegroX= j, reyNegroY= i;
        }
    }
    cout<<king(reyBlancoX, reyBlancoY, 'a'-'A')<<"\n"<<king(reyNegroX, reyNegroY, 0);
}
/*
........
........
..R.....
........
........
.....a..
.....r..
........
*/
